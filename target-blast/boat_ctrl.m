% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)
function [ctrl,e_x,ctrl_aux] = boat_ctrl(eta,nu,P,eta_d,nu_d,ie_x,t)

    % prepare state variables:
    p = eta(1:2);
    psi = eta(3);
    v = nu(1:2);
    om = nu(3);
    J = Euler2R([0;0;psi]);
    J2d = J(1:2,1:2);
    
    % prepare integral state variables:
    ie_p = ie_x(1:2);
    ie_Va = ie_x(3);
    ie_yaw = ie_x(4);
    
    % prepare reference:
    p_d = eta_d(1:2);
    psi_d = eta_d(3);
    v_d = nu_d(1:2);
    om_d = nu_d(3);
    Jd = Euler2R([0;0;psi_d]);
    Jd2d = Jd(1:2,1:2);

    % define basic errors
    e_p = Jd2d'*(p - p_d);
%     e_np = norm(e_p);
    e_np = max(e_p'*v/norm(v),0);
    ie_np = max(ie_p'*v/norm(v),0);
    e_dp_aux = e_p/norm(e_p);
    e_dp = e_dp_aux(2);
    e_v = Jd2d'*J2d*(v - v_d);
    e_nv = norm(e_v);
    e_dv_aux = e_v/norm(e_v);
    e_dv = e_dv_aux(2);

    e_yaw = psi - psi_d;
    e_om = om - om_d;
%     e_yaw = psi + sat(atan2(e_p(2),e_p(1)),pi/3);
%     factor = sat(norm(e_p),1);
%     e_yaw = psi - ((1-factor)*psi_d - factor*atan2(e_p(2),e_p(1)));
%     e_dp = sat(atan2(e_p(2),e_p(1)),10/3*pi); %directional position error
%     e_dv = sat(atan2(e_v(2),e_v(1)),10/3*pi); %directional velocity error
%     e_dp = sat(e_p(2),10); %directional position error
%     e_dv = sat(e_v(2),10); %directional velocity error

    % thrust control errors
    Va_ref = norm(nu_d(1:2));
    Va = norm(nu(1:2));
    e_Va = Va - Va_ref;
    fprintf('Va_ref = %f, Va=%f         ', Va_ref, Va);

    e_x = [e_p;e_Va;e_yaw];
    ctrl_aux = [e_p;e_v;ie_p;e_Va;ie_Va;e_yaw;e_om;e_dp;e_dv;ie_yaw];

    if P.ctrl_mode == 0
        if t<3
            ctrl = [0.5;0*pi/180/P.delta_max];
        else
            ctrl = [0.5;0*pi/180/P.delta_max];
        end
        %fprintf('1 = %f, 2 = %f\n', ctrl(1), ctrl(2));
    else
        % surge velocity controller
        n_norm = -P.kp_n*e_np - P.kpi_n*ie_np...
                 -P.kV_n*e_Va - P.kVi_n*ie_Va;%
%       n_p = n_norm*P.n_p_max;
        
        % direction controller
        delta_norm = -P.kyaw_delta*e_yaw - P.kom_delta*e_om...
                     -P.kdp_delta*e_dp - P.kdv_delta*e_dv;% - P.ki_n*ie_yaw;
%         delta = delta_norm*P.delta_max;
        %fprintf('e_np = %f, ie_np = %f, e_Va = %f, ie_Va = %f\n', e_np, ie_np, e_Va, ie_Va);
        fprintf('n_norm = %f, delta_norm = %f\n', n_norm, delta_norm);
        fprintf('ie_np = %f, ie_Va = %f\n', ie_np, ie_Va);

        ctrl = [sat(n_norm,1);sat(delta_norm,1)];
        


    end
    
%     if t > 0.001
%         fprintf('t = %f: T = %f; tau = [%f %f %f]; e_p = [%f %f %f]; e_v = [%f %f %f]; f_d = [%f %f %f]; e_R = [%f %f %f]; e_om = [%f %f %f].\n',...
%             t,T,tau(1),tau(2),tau(3),e_p(1),e_p(2),e_p(3),e_v(1),e_v(2),e_v(3),...
%             f_d(1),f_d(2),f_d(3),e_R(1),e_R(2),e_R(3),e_om(1),e_om(2),e_om(3));
%         test = 1;
%     end
    
end