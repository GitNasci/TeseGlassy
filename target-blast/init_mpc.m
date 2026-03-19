%function MPC = init_mpc(P)

addpath('C:\tese\casadi-3.6.7-windows64-matlab2018b')
import casadi.*
MX.sym('test', 1)

% M690B drone MPC controller definition
% state
eta_ = MX.sym('eta',3);
nu_ = MX.sym('nu',3);
xx = [eta_;nu_];
n_states = size(xx,1);
% control
n_norm = MX.sym('n_norm',1);
delta_norm = MX.sym('delta_norm',1);
uu = [n_norm;delta_norm];
n_controls = size(uu,1);
u_min = [0; -1]; u_max = [1; 1];

% Simplified Nonlinear ODE (Ordinary Differential Equation)
[deta,dnu] = boat_full_dyn(eta_,nu_,uu,P);
% n_p = n_norm*P.n_p_max;
% delta = delta_norm*P.delta_max;
% psi = eta(3);
% u = nu(1);
% v = nu(2);
% r = nu(3);
% % kinematics equation
% J = [ cos(eta(3)) ,	-sin(eta(3))	,	0
% 	  sin(eta(3)) ,	 cos(eta(3))	,	0
% 	  0			  ,	 0				,	1	]; % Euler2R([0;0;psi]);
% deta = J*nu;
% % define variable parametric components
% Crb = [ 0              ,  0     , P.m*(P.Xg*r+v)
%         0              ,  0     , P.m*u
%         P.m*(P.Xg*r+v) , -P.m*u , 0              ];
% Ca  = [  0               , 0       ,  P.Ydv*v+P.Ydr*r
%          0               , 0       , -P.Xdu*u
%         -P.Ydv*v-P.Ydr*r , P.Xdu*u ,  0          ];
% C = Ca + Crb;
% Dn = [ P.Xuu*abs(u) , 0                         , 0 
%        0            , P.Yvv*abs(v)+P.Yvr*abs(r) , P.Yrv*abs(v)+P.Yrr*abs(r)
%        0            , P.Nvv*abs(v)+P.Nvr*abs(r) , P.Nrv*abs(v)+P.Nrr*abs(r) ];
% D = P.Dconst + Dn;
% Va = norm(nu(1:2));
% Tp = n_p/P.n_p_max*P.T_p_max;
% Fr = 0*P.Kdelta*Va^2*delta;
% tau = [ Tp*cos(delta) - Fr*sin(delta) ; Tp*sin(delta) + Fr*cos(delta) ; P.Lcg*(Tp*sin(delta) + Fr*cos(delta)) ];
% % dynamics
% dnu = P.M\(tau - 0*C*nu - D*nu);
xdot = [deta; dnu];
f_cont = Function('f_cont',{xx,uu},{xdot},{'x','u'},{'ode'}); % last two represent labels for better understanding
% controller parameters
P.T = 3; % Time horizon [s]
P.N = P.T/P.dTo; % Number of control intervals
P.Q = blkdiag(1,1,1,2,2,2)*10;
P.R = blkdiag(0.01,0.01);
P.P = 10*P.Q;
% Integrator to discretize the system
intg_options = struct;
intg_options.tf = P.T/P.N;
intg_options.simplify = true;
intg_options.number_of_finite_elements = 4;
% DAE (Differential-algebraic equations) problem
dae = struct;
dae.x = xx;          % States
dae.p = uu;          % Parameters are the things thar are fixed during the integration horizon --> In this case, controls
dae.ode = f_cont(xx,uu);   % System right hand side f(x,u) = ode
intg = integrator('intg','rk', dae, intg_options); % Label, especific integration method, problem definition, options
result = intg('x0',xx,'p',uu); % Evaluate with symbols
x_next = result.xf;
f_disc = Function('f_disc',{xx,uu},{x_next},{'x','u'},{'x_next'}); % {x,u} -> {x_next}

% prepare reference for MPC problem:
P.nIO = P.dTo/P.dTi;

% Optimal control problem using multiple-shooting
MPC = casadi.Opti(); % to use ipopt
% MPC = casadi.Opti('conic'); % to use qpoasis
P.xx = MPC.variable(n_states,P.N+1); % Decision variables for state trajectory
P.uu = MPC.variable(n_controls,P.N);
P.xx0 = MPC.parameter(n_states,1); % Because MPC, the first state must be equal to a measurement --> Parameter (not optimized over)
P.xx_ref = MPC.parameter(n_states,P.N+1); % reference state trajectory
% x_ini = MPC.parameter(n_states,P.N+1); % initial guess for state sequence
% u_ini = MPC.parameter(n_controls,P.N); % initial guess for input sequence
obj = 0;
tk = 0;
for k = 1:P.N
    obj = obj + (P.xx(:,k)-P.xx_ref(:,k))'*P.Q*(P.xx(:,k)-P.xx_ref(:,k)) + P.uu(:,k)'*P.R*P.uu(:,k);
end
obj = obj + (P.xx(:,P.N+1)-P.xx_ref(:,P.N+1))'*P.P*(P.xx(:,P.N+1)-P.xx_ref(:,P.N+1));
MPC.minimize(obj);
% Dynamic constraints of the multiple shooting
for k=1:P.N
    MPC.subject_to(P.xx(:,k+1) == f_disc(P.xx(:,k),P.uu(:,k))); % One step integration function predicts
end
MPC.subject_to(u_min <= P.uu <= u_max)
MPC.subject_to(P.xx(:,1) == P.xx0)

% Solution Value
% use ipopt (mean dt_MPC = 13 ms, max dt_MPC = ~40 ms)
s_opts = struct;
s_opts.ipopt.print_level =0;
s_opts.print_time = 0;
MPC.solver('ipopt',s_opts);
% % use qpoases as problem is QP with linear equality constraints 
% % (mean dt_MPC = 40 ms, max dt_MPC = ~150 ms)
% s_opts = struct;
% s_opts.printLevel = 'none';
% s_opts.print_time = 0;
% MPC.solver('qpoases',s_opts);

% % Test if problem is well defined
% try
%     iD = 1;
%     x0_test = [eta0{iD}(:,1);nu0{iD}(:,1)];
%     x_ref_test = [eta_ref{iD}(:,1:P.nIO:P.nIO*(P.N+1));nu_ref{iD}(:,1:P.nIO:P.nIO*(P.N+1))];
%     x_ini_test = zeros(n_states,P.N+1);
%     u_ini_test = zeros(n_controls,P.N);
% 
%     MPC.set_value(P.xx0,x0_test);
%     MPC.set_value(P.xx_ref,x_ref_test);
%     MPC.set_initial(P.xx,x_ini_test);
%     MPC.set_initial(P.uu,u_ini_test);
%     sol = MPC.solve();
%     x_seq = sol.value(P.xx);
%     u_seq = sol.value(P.uu);
%     pos = x_seq(1:2,:);
%     pos_ref = x_ref_test(1:2,:);
%     yaw = x_seq(3,:);
%     yaw_ref = x_ref_test(3,:);
%     nu = x_seq(4:6,:);
%     nu_ref = x_ref_test(4:6,:);
%     t_test = 0:P.dTo:P.dTo*P.N;
% 
%     figure(1);
%     plot(pos(1,:),pos(2,:),'b');
%     hold on;
%     plot(pos_ref(1,:),pos_ref(2,:),'g--');
%     hold off;
%     xlabel('$$x$$ [m]');
%     ylabel('$$y$$ [m]');
%     grid on;
%     axis equal;
%     legend('$$p$$','$$p_{ref}$$');
% 
%     figure(2);
%     plot(t_test,pos);
%     hold on;
%     plot(t_test,pos_ref,'--');
%     hold off;
%     xlabel('$$t$$ [s]');
%     ylabel('$$p$$ [m]');
%     grid on;
%     legend('$$x$$','$$y$$','$$x_{ref}$$','$$y_{ref}$$');
% 
%     figure(3);
%     plot(t_test,yaw*180/pi);
%     hold on;
%     plot(t_test,yaw_ref*180/pi,'--');
%     hold off;
%     xlabel('t [s]');
%     ylabel('$$\psi$$ [deg]');
%     grid on;
%     legend('$$\psi$$','$$\psi_{ref}$$');
% 
%     figure(4);
%     plot(t_test,nu);
%     hold on;
%     plot(t_test,nu_ref,'--');
%     hold off;
%     xlabel('$$t$$ [s]');
%     ylabel('$$\nu$$ [m]');
%     grid on;
%     legend('$$v_x$$','$$v_y$$','$$\omega_z$$','$$v_{x ref}$$','$$v_{y ref}$$','$$omega_{z ref}$$');
% 
%     figure(5);
%     plot(t_test(1:end-1),u_seq);
%     xlabel('$$t$$ [s]');
%     ylabel('$$u$$');
%     grid on;
%     legend('$$n_{norm}$$','$$\delta_{norm}$$');
% 
% catch ME
%     error(ME.message);
% end


for iD = 1:P.nD
    x_MPC{iD} = zeros(n_states,P.N+1);
    u_MPC{iD} = zeros(n_controls,P.N);
end