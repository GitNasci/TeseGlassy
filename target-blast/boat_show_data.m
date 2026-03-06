% Project Capture
% Bruno Guerreiro (bj.guerreiro@fct.unl.pt)
% 
% Summary: script that plots basic simulation results

imgs_folder = 'figures/';
saves_folder = 'saves/';
if ~exist('filename','var') || isempty(filename)
    filename = [datestr(now,30) '_simul_boat'];
end
do_print = 0; % set to 1 to plot each plot in a PDF file (for latex reports)
do_save_workspace = 0; % set to 1 to save workspace to *.mat file

% test if results are from script or simulink and prepare variables
% accordingly:
if exist('out','var') 
    nD = 1; % force number of drones to 1

    t = out.simout.time;
    data = permute(out.simout.signals.values,[1,3,2]);
    
    [n1,n2] = size(out.simout.signals.values);
    if n1 > n2 % diferent Matlab versions use the transpose of the data values
        data = data';
    end
    ref{1} = data((1:6),:);
    x{1} = data(6+(1:6),:);
    ctrl{1} = data(6+6+(1:2),:);
    xie{1} = data(6+6+2+(1:2),:);
    
    eta{1} = x{1}(1:3,:);
    
    eta_ref{1} = ref{1}(1:3,:);
    nu_ref{1} = ref{1}(4:6,:);

end

if k < P.Nsim
    % simulation terminated permaturely
    % arrange variables form incomplete plots
    for iD = 1:nD
        x{iD} = x{iD}(:,1:k);
        ctrl{iD} = ctrl{iD}(:,1:k);
        eta{iD} = eta{iD}(:,1:k);
        nu{iD} = nu{iD}(:,1:k);
        eta_ref{iD} = eta_ref{iD}(:,1:k);
        nu_ref{iD} = nu_ref{iD}(:,1:k);
    end
end

% show results plot
set(0,'defaultTextInterpreter','latex');
set(0,'defaultLegendInterpreter','latex');
sstblue         = [0,128,255]/255;
sstlightblue    = [48,208,216]/255;
sstlighterblue  = [50,220,240]/255;
sstlightestblue = [60,230,255]/255;
sstgreen        = [43,191,92]/255;
sstlightgreen   = [140,255,200]/255;
sstlightergreen = [160,255,225]/255;
sstgray         = [70,70,70]/255;
sstlightgray    = [200,200,200]/255;

dcolors = { sstgreen, sstblue, sstlightblue, sstlighterblue, sstlightestblue, sstlightgreen, sstlightergreen, sstlightgray };

sstgray = [70,70,70]/255;
nD = length(eta);
nt = length(t);
dt = mean(t(2:end)-t(1:end-1));

figure(100);
for iD = 1:nD
    hini{iD} = plot(eta{iD}(1,1),eta{iD}(2,1),'o','Color',dcolors{iD},'MarkerSize',2);
    if iD == 1, hold on; end
    href{iD} = plot(eta_ref{iD}(1,:),eta_ref{iD}(2,:),'--','Color',sstlightgray);
%     hp{iD} = plot(eta{iD}(1,:),eta{iD}(2,:),'-','Color',dcolors{iD});
    boat_plot(eta_ref{iD}(:,1),[],sstlightgray);
    last_p = eta_ref{iD}(1:2,1);
    for k = 2:10:nt
        dp = norm(eta_ref{iD}(1:2,k) - last_p);
        if dp > 1.5
            boat_plot(eta_ref{iD}(:,k),[],sstlightgray);
            last_p = eta_ref{iD}(1:2,k);
        end
    end
    boat_plot(eta_ref{iD}(:,end),[],sstlightgray);
    boat_plot(eta{iD}(:,1),[],dcolors{iD});
    last_p = eta{iD}(1:2,1);
    for k = 2:10:nt
        dp = norm(eta{iD}(1:2,k) - last_p);
        if dp > 1.5
            boat_plot(eta{iD}(:,k),[],dcolors{iD});
            last_p = eta{iD}(1:2,k);
        end
    end
    boat_plot(eta{iD}(:,end),[],dcolors{iD});

end
hold off;
grid on;
axis equal;
% axis([-1.2 1.2 -1.2 1.2 0 3]);
xlabel('x [m]');
ylabel('y [m]');
legend('start','ref','trajectory');
print2pdf([imgs_folder filename '_traj'],do_print);

figure(101);
subplot(311);
plot(t,eta_ref{1}(1,:),'Color',sstgray);
hold on;
plot(t,x{1}(1,:),'Color',dcolors{1});
% hold on;
for iD = 2:nD
    plot(t,eta_ref{iD}(1,:),'Color',sstgray);
    plot(t,x{iD}(1,:),'Color',dcolors{iD});
end
hold off;
grid on;
ylabel('$$x(t)$$ [m]');
title('Drone position and reference');
subplot(312);
plot(t,eta_ref{1}(2,:),'Color',sstgray);
hold on;
plot(t,x{1}(2,:),'Color',dcolors{1});
% hold on;
for iD = 2:nD
    plot(t,eta_ref{iD}(2,:),'Color',sstgray);
    plot(t,x{iD}(2,:),'Color',dcolors{iD});
end
hold off;
grid on;
ylabel('$$y(t)$$ [m]');
subplot(313);
plot(t,eta_ref{1}(3,:)*180/pi,'Color',sstgray);
hold on;
plot(t,x{1}(3,:)*180/pi,'Color',dcolors{1});
% hold on;
for iD = 2:nD
    plot(t,eta_ref{iD}(3,:)*180/pi,'Color',sstgray);
    plot(t,x{iD}(3,:)*180/pi,'Color',dcolors{iD});
end
hold off;
grid on;
xlabel('$$t$$ [s]');
ylabel('$$\psi(t)$$ [deg]');
print2pdf([imgs_folder filename '_eta'],do_print);

figure(102);
subplot(311);
plot(t,nu_ref{1}(1,:),'Color',sstgray);
hold on;
plot(t,x{1}(4,:),'Color',dcolors{1});
% hold on;
for iD = 2:nD
    plot(t,nu_ref{iD}(1,:),'Color',sstgray);
    plot(t,x{iD}(4,:),'Color',dcolors{iD});
end
hold off;
grid on;
ylabel('$$v_x(t)$$ [m/s]');
title('Drone velocity and reference');
subplot(312);
plot(t,nu_ref{1}(2,:),'Color',sstgray);
hold on;
plot(t,x{1}(5,:),'Color',dcolors{1});
% hold on;
for iD = 2:nD
    plot(t,nu_ref{iD}(2,:),'Color',sstgray);
    plot(t,x{iD}(5,:),'Color',dcolors{iD});
end
hold off;
grid on;
ylabel('$$v_y(t)$$ [m/s]');
subplot(313);
plot(t,nu_ref{1}(3,:)*180/pi,'Color',sstgray);
hold on;
plot(t,x{1}(6,:)*180/pi,'Color',dcolors{1});
% hold on;
for iD = 2:nD
    plot(t,nu_ref{iD}(3,:)*180/pi,'Color',sstgray);
    plot(t,x{iD}(6,:)*180/pi,'Color',dcolors{iD});
end
hold off;
grid on;
xlabel('$$t$$ [s]');
ylabel('$$\omega(t)$$ [deg/s]');
print2pdf([imgs_folder filename '_nu'],do_print);

figure(103);
subplot(211);
plot(t,ctrl{1}(1,:)*100,'Color',dcolors{1});
hold on;
for iD = 2:nD
    plot(t,ctrl{iD}(1,:)*100,'Color',dcolors{iD});
end
hold off;
grid on;
ylabel('$$n_p(t)$$ [\%]');
title('Control variables');
subplot(212);
plot(t,ctrl{1}(2,:)*180/pi,'Color',dcolors{1});
hold on;
for iD = 2:nD
    plot(t,ctrl{iD}(2,:)*180/pi,'Color',dcolors{iD});
end
hold off;
grid on;
ylabel('$$\delta(t)$$ [deg]');
print2pdf([imgs_folder filename '_act'],do_print);

if do_save_workspace
    save([saves_folder filename '.mat']);
end

% boat_animate(p,p_ref,lbd,t,dcolors);
