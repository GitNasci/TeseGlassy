% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)

% Summary: simulate simple dynamic system model of a boat

boat_init_mpc;

% main time loop for simulation
sim_status = 0;
fprintf('Simulation: t = %6.2f/%6.2f s',(1-1)*P.dTi,(P.Nsim-1)*P.dTi);
tCPU_ini = tic;
for k = 1:P.Nsim
    for iD = 1:P.nD
        
        % get state vector
        eta{iD}(:,k) = x{iD}(1:3,k);
        nu{iD}(:,k) = x{iD}(4:6,k);
        
        % get reference
        time = P.dTi*(k-1);
        [eta_d,nu_d] = get_boat_ref(time,Param);

        % mpc controller
        tCPU{iD}(k) = tic - tCPU_ini;
        if k > 1
            u_prev = ctrl{iD}(:,k-1);
        else
            u_prev = ctrl{iD}(:,k);
        end
        tic
        try
            [ctrl{iD}(:,k),x_MPC{iD},u_MPC{iD},status_MPC] = ...
                boat_mpc_ctrl(eta{iD}(:,k),nu{iD}(:,k),Param,eta_d,nu_d,...
                              k,x_MPC{iD},u_MPC{iD},u_prev);
        catch ME
            disp(ME.message);
            break;
        end
        dtCPU{iD}(k) = toc;
        
        % nonlinear drone model (continuous time)
        [dot_eta,dot_nu] = boat_full_dyn(eta{iD}(:,k),nu{iD}(:,k),ctrl{iD}(:,k),Param);
        
        % discretization 
        etap = eta{iD}(:,k) + Param.dTi*dot_eta;
        nup = nu{iD}(:,k) + Param.dTi*dot_nu;
        if k < P.Nsim
            x{iD}(:,k+1) = [etap;nup];
%             xie{iD}(:,k+1) = xie{iD}(:,k) + Param.dTi*e_x; % integral errors

            % debug
            if any(abs(x{iD}(:,k+1))>1e6) || any(isnan(x{iD}(:,k+1)))
                break;
            end
        end
        
    end

    % feedback on evolution of simulation
    if mod((k-1)*P.dTi,0.1)
%         fprintf('\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b');
        fprintf('\n t = Simulation: ');
        fprintf('%6.2f/%6.2f s',(k-1)*P.dTi,(P.Nsim-1)*P.dTi);
    end
end

% simulation finished
% fprintf('\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b');
fprintf('\n t = Simulation: ');
fprintf('%6.2f/%6.2f s\n',(k-1)*P.dTi,(P.Nsim-1)*P.dTi);
fprintf('SIMULATION FINISHED.\n');

boat_show_data;
