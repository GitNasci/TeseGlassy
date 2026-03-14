function u_sat = sat(u,u_max,u_min)
    
    if ~exist('u_min','var') || isempty (u_min)
        u_min = -u_max;
    end

    if u > u_max
        u_sat = u_max;
    elseif u < u_min
        u_sat = u_min;
    else
        u_sat = u;
    end

end