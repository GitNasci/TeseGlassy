% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)
function [ctrl,x_seq_next,u_seq_next,status_mpc] = ...
    boat_mpc_ctrl(eta,nu,P,eta_d,nu_d,...
                  k,x_seq_prev,u_seq_prev,u_prev)

    if ~mod((k-1)*P.dTi,P.dTo)
        P.MPC.set_value(P.xx0,[eta;nu]);
        P.MPC.set_value(P.xx_ref,[eta_d;nu_d]*ones(1,P.N+1));
        P.MPC.set_initial(P.xx,x_seq_prev);
        P.MPC.set_initial(P.uu,u_seq_prev);
        sol = P.MPC.solve();
        status_mpc = sol.stats;
        x_seq = sol.value(P.xx);
        u_seq = sol.value(P.uu);
        x_seq_next = [x_seq(:,2:end),x_seq(:,end)];
        u_seq_next = [u_seq(:,2:end),u_seq(:,end)];
        u_mpc = u_seq(:,1);
    else
        status_mpc = [];
        x_seq_next = x_seq_prev;
        u_seq_next = u_seq_prev;
        u_mpc = u_prev;
    end

    ctrl = u_mpc;
%     ctrl = [sat(n_norm,1);sat(delta_norm,1)];

%     if t > 0.001
%         fprintf('t = %f: T = %f; tau = [%f %f %f]; e_p = [%f %f %f]; e_v = [%f %f %f]; f_d = [%f %f %f]; e_R = [%f %f %f]; e_om = [%f %f %f].\n',...
%             t,T,tau(1),tau(2),tau(3),e_p(1),e_p(2),e_p(3),e_v(1),e_v(2),e_v(3),...
%             f_d(1),f_d(2),f_d(3),e_R(1),e_R(2),e_R(3),e_om(1),e_om(2),e_om(3));
%         test = 1;
%     end
    
end

