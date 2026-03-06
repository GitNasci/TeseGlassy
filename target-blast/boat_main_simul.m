% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)

% Summary: simulate simple dynamic system model of a boat

boat_init;

% main time loop for simulation
for k = 1:P.Nsim
    for iD = 1:P.nD
                
        % get state vector
        eta{iD}(:,k) = x{iD}(1:3,k);
        nu{iD}(:,k) = x{iD}(4:6,k);
        
        % get reference
        time = P.dTi*(k-1);
        [eta_d,nu_d] = get_boat_ref(time,Param);

        % mellinger controller
        [ctrl{iD}(:,k),e_x] = boat_ctrl(eta{iD}(:,k),nu{iD}(:,k),Param,eta_d,nu_d,xie{iD}(:,k),k*Param.dTi);
        
        % nonlinear drone model (continuous time)
        [dot_eta,dot_nu] = boat_full_dyn(eta{iD}(:,k),nu{iD}(:,k),ctrl{iD}(:,k),Param);
        
        % discretization 
        etap = eta{iD}(:,k) + Param.dTi*dot_eta;
        nup = nu{iD}(:,k) + Param.dTi*dot_nu;
        if k < P.Nsim
            x{iD}(:,k+1) = [etap;nup];
            xie{iD}(:,k+1) = xie{iD}(:,k) + Param.dTi*e_x; % integral errors

            % debug
            if any(abs(x{iD}(:,k+1))>1e6) || any(isnan(x{iD}(:,k+1)))
                break;
            end
        end
    
    end
end

boat_show_data;
