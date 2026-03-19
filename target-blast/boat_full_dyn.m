function [deta,dnu] = boat_full_dyn(eta,nu,ctrl,P)
%DRONE_MODEL Summary of this function goes here
%   Detailed explanation goes here

    % get state and control variables
    if contains(class(ctrl),'casadi')
        % saturation in ode not suported by casadi
        n_norm = ctrl(1);
        delta_norm = ctrl(2);
    else
        % force saturation
        n_norm = sat(ctrl(1),1);
        delta_norm = sat(ctrl(2),1);
    end
    n_p = n_norm*P.n_p_max;
    delta = delta_norm*P.delta_max;
    psi = eta(3);
    u = nu(1);
    v = nu(2);
    r = nu(3);
    
    u = max(min(u, 5), -5);
    v = max(min(v, 2), -2);
    r = max(min(r, 1), -1);


    % kinematics equation
    J = Euler2R([0;0;psi]);
    deta = J*nu;

    % define variable parametric components
    Crb = [ 0              ,  0     , P.m*(P.Xg*r+v)
            0              ,  0     , P.m*u
            P.m*(P.Xg*r+v) , -P.m*u , 0              ];
    Ca  = [  0               , 0       ,  P.Ydv*v+P.Ydr*r
             0               , 0       , -P.Xdu*u
            -P.Ydv*v-P.Ydr*r , P.Xdu*u ,  0          ];
    C = Ca + Crb;
    Dn = [ P.Xuu*abs(u) , 0                         , 0 
           0            , P.Yvv*abs(v)+P.Yvr*abs(r) , P.Yrv*abs(v)+P.Yrr*abs(r)
           0            , P.Nvv*abs(v)+P.Nvr*abs(r) , P.Nrv*abs(v)+P.Nrr*abs(r) ];
    D = P.Dconst + Dn;

    Va = norm(nu(1:2)); % assuming no current
    %Tp = P.Tnn*abs(n_p)*n_p + P.Tnv*abs(n_p)*Va;
    Tp = n_p/P.n_p_max*P.T_p_max;
    Fr = 0*P.Kdelta*Va^2*delta;
    tau = [ Tp*cos(delta) - Fr*sin(delta)
            Tp*sin(delta) + Fr*cos(delta)
            P.Lcg*(Tp*sin(delta) + Fr*cos(delta)) ];


    n_pwm =1000*ctrl(1)+1000;
  
    
    % Forças não lineares
    u_dot  = P.a1 * v * r + P.a2 * u + P.a3 * u^2 + P.E_T * max(n_pwm- P.u_0, 0) + P.a4 * abs(r);
    v_dot  = P.b1 * r * u + P.b2 * v + P.b3 * v*abs(v);
    r_dot  = P.c1 * u * v + P.c2 * r + P.c3 * r*abs(r) + P.c4 * u^2 * sin(delta) + P.c5 * u * r + P.c6 * u^2;

    TRUST=max(ctrl(1) - P.u_0, 0);
    % Imprimir cada termo
 
    


    dnu = [u_dot; v_dot; r_dot];
    

    

    %dnu = dnu - D_extra * nu; % Adicione ao cálculo

    %dnu = P.M\(tau - 0*C*nu - D*nu);
   
    %disp(dnu)





%     if any(abs(dnu)>1e3) || any(isnan(dnu)) || any(abs(deta)>1e3) || any(isnan(deta))
%         disp("Boat dynamics diverging!");
%     end
    
end