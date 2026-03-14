% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)
function [ctrl,e_x] = boat_ctrl(eta,nu,P,eta_d,nu_d,ie_x,t)

    % prepare variables:
    p = eta(1:2);
    p_d = eta_d(1:2);
    psi = eta(3);
    psi_d = eta_d(3);
    J = Euler2R([0;0;psi]);

    % define basic errors
    e_p = J(1:2,1:2)'*(p - p_d);
    e_yaw_p = psi - atan2(e_p(2),e_p(1));
    e_yaw = psi - psi_d;
    e_v = nu(1:2) - nu_d(1:2);
    e_dyaw = atan2(e_v(2),e_v(1));
    ie_p = ie_x(1:2);
    ie_Va = ie_x(3);
    ie_yaw = ie_x(4);

    % thrust control errors
    Va_ref = norm(nu_d(1:2));
    Va = norm(nu(1:2));
    e_Va = Va - Va_ref;

    e_x = [e_p;e_Va;e_yaw];

    if P.ctrl_mode == 0
        if t<3
            ctrl = [0.5;0*pi/180/P.delta_max];
        else
            ctrl = [0.5;60*pi/180/P.delta_max];
        end
    else
        % surge velocity controller
        n_p = P.kp_n*norm(e_p);%  + P.kpi_n*norm(ie_p) - P.kv_n*e_Va - P.ki_n*ie_Va;
        n_norm = n_p/P.n_p_max;
        
        % direction controller
        delta = P.kp_delta*e_yaw;% + P.kv_delta*e_dyaw - P.ki_n*ie_yaw;
        delta_norm = delta/P.delta_max;

        ctrl = [sat(n_norm,1);sat(delta_norm,1)];
    end
    
%     if t > 0.001
%         fprintf('t = %f: T = %f; tau = [%f %f %f]; e_p = [%f %f %f]; e_v = [%f %f %f]; f_d = [%f %f %f]; e_R = [%f %f %f]; e_om = [%f %f %f].\n',...
%             t,T,tau(1),tau(2),tau(3),e_p(1),e_p(2),e_p(3),e_v(1),e_v(2),e_v(3),...
%             f_d(1),f_d(2),f_d(3),e_R(1),e_R(2),e_R(3),e_om(1),e_om(2),e_om(3));
%         test = 1;
%     end
    
end

