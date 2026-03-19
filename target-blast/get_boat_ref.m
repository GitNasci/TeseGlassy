
function [eta_d,nu_d] = get_boat_ref(t,Param)
    nt = length(t);
    if Param.ref_mode == 1 % line reference
        Vnorm = 1.01;%%m per sec
        nu_d = [Vnorm;0;0]*ones(1,nt);
%         eta_d = Param.eta0 + nu_d.*t;
        eta_d = [0;1;0] + nu_d.*t;
        
    else % circle reference
        phase = 0;
        Rad = 6;      % radius of circle
        omn = 2*pi/32;  % rotation frequency
        eta_d = [ Rad*cos(omn*t+phase);Rad*sin(omn*t+phase);omn*t+phase+pi/2];
        psi_d = eta_d(3,:);
        I_nu_d = [-Rad*omn*sin(omn*t+phase);Rad*omn*cos(omn*t+phase);omn*ones(1,nt)];
        nu_d = zeros(size(I_nu_d));
        for i = 1:length(psi_d)
            nu_d(:,i) = Euler2R([0;0;psi_d(i)])'*I_nu_d(:,i);
        end
    end

end
