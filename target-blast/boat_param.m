function P = boat_param()
% Traxxas blast parame
% define model parameters

rho = 1000;   % Water density
m = 1;        % Mass
L = 0.603;    % Length overall
Lcg = 0.197;  % Longitudinal center of gravity
T = 0.083;    % Draft 
Lwl = 0.455;  % Length on the waterline
Bwl = 0.118;  % Beam on the waterline
Xg = 0;   
Iz = 0.9;     % made up! compute using solid works!
% hidrodynamic coefficients based on [Kli+16] https://doi.org/10.1109/JOE.2016.2571158
% everything need a thorough identification study!
Xdu = 0.075*(-m);
Ydv = 0.2*(-pi*rho*L*T^2);
Ydr = 3*(-1/2*pi*rho*T^2*((L-Lcg)^2 + Lcg^2));
Ndv = 1*(-1/2*pi*rho*T^2*((L-Lcg)^2 + Lcg^2));
Ndr = 0.5*(-1/2*pi*rho*T^2*( 4.75*Bwl/2*T^2 + 2/3*((L-Lcg)^2 + Lcg^2) ));
Ma = -[ Xdu , 0   , 0 
        0   , Ydv , Ydr
        0   , Ndv , Ndr    ];
Mrb = [ m , 0    , 0 
        0 , m    , m*Xg
        0 , m*Xg , Iz     ];
P.M = Mrb + Ma;

P.m = m;
P.rho = rho;
P.Lcg = Lcg;
P.Xg = Xg;
P.Xdu = Xdu;
P.Ydv = Ydv;
P.Ydr = Ydr;
P.u_eq = 1;
P.v_eq = 0;
P.r_eq = 0;
P.Va_eq = sqrt(P.u_eq^2 + P.v_eq^2);
Xu = -2; %see table II of [Kli+16]; special care needed here as not based on model scale...
Yv = 0.5*(-40/2*pi*rho*T*abs(P.v_eq)*(1.1+0.0045*L/T-0.1*Bwl/T + 0.016*(Bwl/T)^2));
Yr = 1*(-pi*rho*T^2*L*P.Va_eq);
Nv = 0.5*(-pi*rho*T^2*L*P.Va_eq);
Nr = 0.2*(-pi*rho*T^2*L^2*P.Va_eq);
P.Xuu = 0.5; %see table II of [Kli+16]; special care needed here as not based on model scale...
Cd = 0.5;
P.Yvv = 1*(-rho*T*L*Cd);
P.Yvr = 1*(-1/2*rho*T*((L-Lcg)^2 + Lcg^2));
P.Yrv = P.Yvr;
P.Yrr = 1*(-1/3*rho*T*Cd*((L-Lcg)^3 + Lcg^3));
P.Nvv = P.Yvr;
P.Nvr = P.Yrr;
P.Nrv = P.Yrr;
P.Nrr = 1*(-1/4*rho*T*Cd*((L-Lcg)^4 + Lcg^4));
P.Dconst = -[   Xu , 0  , 0 
                0  , Yv , Yr
                0  , Nv , Nr    ];

% actuation parameters
P.n_p_max = 3620; % rad/s (7.2V * 4800Kv = 34560 rpm ~ 3620 rad/s)
P.T_p_max = 10; % 1.0 kgf
Kf = 1;
P.delta_max = 60*pi/180;
P.Kdelta = pi*Kf/(2*P.delta_max);

% Surge (u) - Foco na paragem mais eficiente
P.a1 =  1.3315;  
P.a2 = -0.6368  
P.a3 =-0.0207  
P.E_T =  0.0167;    
P.u_0 =  1336.8636;   
P.a4 = -0.1659;   


% Sway (v) - Reduzir pequenas oscilações no final
P.b1 = -0.7933; 
P.b2 = -3.8424;   
P.b3 = -0.001;  

% Yaw (r) - Evitar oscilações finais e deixar mais preciso
P.c1 =  1.8205;    
P.c2 = -0.9805;   
P.c3 = -1.1044;  
P.c4 =  2.0113;   
P.c5 = -1.5616;   
P.c6 =  0.2833;