% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)

% inicializations
clear all;
initPlots;
P = boat_param(); % get boat parameters

% Model and simulation parameters
P.Tend = 20;
P.dTi = 0.01;  % inner-loop and simulation sampling period
P.dTo = 0.1;   % outer-loop sampling period
P.Nsim = round(P.Tend/P.dTi)+1;
P.nD = 1;         % number of boats

% reference parameters
P.ref_mode = 1; % reference: 1 - line reference; 2 - circle
P.ctrl_mode = 0; % 0 - open loop; 1 - V and yaw PID control.

P.dh = 0.05;      % safety height difference between drones
P.Rad = 0.5;      % radius of circle
P.omn = 2*pi/20;  % rotation frequency
P.dphase = -pi/12;% ref circle angular difference between drones


% % Gains for nonlinear controller TBD
P.kp_n = 1000;
P.kpi_n = 100;
P.kv_n = 0;
P.ki_n = 0;
P.kp_delta = 0.1;
P.ki_n = 0;
P.kv_delta = 0.05;

% Param.kp = diag([8,8,6]);
% Param.kv = diag([5,5,5]);
% Param.ki = diag([0,0,0]);
% Param.kR = diag([8,8,8]);
% Param.kom= diag([0.5,0.5,0.5]);

% initial conditions
P.eta_ref_static = [0.5;0.5;pi/3];

% initialize variables for all vehicles:
t = 0:P.dTi:P.Tend;
nt = length(t);
nx = 6;
nctrl = 2;
for iD = 1:P.nD

    % set initial conditions
    eta0{iD} = [0;0.2*((P.nD-1)/2-iD+1);0];
    nu0{iD} = [2;0;0];
    x{iD} = zeros(nx,P.Nsim);
    eta{iD} = zeros(3,P.Nsim);
    nu{iD} = zeros(3,P.Nsim);
    xie{iD} = zeros(4,P.Nsim);
    ctrl{iD} = zeros(nctrl,P.Nsim);
    x{iD}(:,1) = [eta0{iD};nu0{iD}];

    if iD == 1 % Set main initial condition
        P.eta0 = eta0{iD};
        P.nu0 = nu0{iD};
    end
    
    [eta_ref{iD},nu_ref{iD}] = get_boat_ref(t,P);
    eta_ref_all{iD} = [eta_ref{iD};nu_ref{iD}];

    %compute CPU times for each controller
    tCPU{iD} = zeros(1,P.Nsim);
    dtCPU{iD} = zeros(1,P.Nsim);

end

init_mpc;
P.MPC = MPC;
Param = P;
