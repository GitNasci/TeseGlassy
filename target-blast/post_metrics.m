function M = post_metrics(t, eta, nu, ctrl, eta_ref, nu_ref, file_out, iD)
% POST_METRICS_GAZEBO_STYLE  —  métricas + (opcional) debug.mat tipo Gazebo
% Uso:
%   M = post_metrics_gazebo_style(t,eta,nu,ctrl,eta_ref,nu_ref,'debug_from_matlab.mat');
%   M = post_metrics_gazebo_style(t,eta,nu,ctrl,eta_ref,nu_ref,[], 1);  % sem ficheiro
%
% iD: índice do barco (default = 1)

if nargin < 8 || isempty(iD), iD = 1; end

% --- extrair sinais (1º barco por defeito) ---
x   = eta{iD}(1,:);   y   = eta{iD}(2,:);   psi = eta{iD}(3,:);
u   = nu{iD}(1,:);    v   = nu{iD}(2,:);    r   = nu{iD}(3,:);

% ATENÇÃO: se ctrl não estiver normalizado, mapeia aqui!
n     = ctrl{iD}(1,:);      % thrust  [0,1]
delta = ctrl{iD}(2,:);      % rudder  [-1,1]

xd  = eta_ref{iD}(1,:);  yd  = eta_ref{iD}(2,:);  psi_d = eta_ref{iD}(3,:);
ud  = nu_ref{iD}(1,:);   rd  = nu_ref{iD}(3,:);

% --- alinhar comprimentos ---
N = min([numel(t), numel(x), numel(xd)]);
t=t(1:N); x=x(1:N); y=y(1:N); psi=psi(1:N);
u=u(1:N); n=n(1:N); delta=delta(1:N);
xd=xd(1:N); yd=yd(1:N); psi_d=psi_d(1:N); ud=ud(1:N);

% --- erros no frame da referência (tal como no Gazebo) ---
e_dp   = -sin(psi_d).*(x - xd) +  cos(psi_d).*(y - yd);     % cross-track
e_psi  = atan2(sin(psi_d-psi), cos(psi_d-psi));             % rad
e_psi_deg = e_psi * 180/pi;
du     = u - ud;

% --- helpers estatísticos (ignoram NaN/Inf) ---
flt  = @(z) z(isfinite(z));
rms_ = @(z) sqrt(mean(flt(z).^2));
p95  = @(z) quantile(abs(flt(z)), 0.95);

% --- métricas ---
M.rms_edp   = rms_(e_dp);
M.p95_edp   = p95(e_dp);
M.rms_epsi  = rms_(e_psi_deg);
M.p95_epsi  = p95(e_psi_deg);
M.rms_du    = rms_(abs(du));
M.u_bar     = mean(flt(u));

thr_hi = sum(n >= 0.999);
thr_lo = sum(n <= 0.001);
M.thr_sat = 100*(thr_hi + thr_lo)/N;
M.rud_sat = 100*sum(abs(delta) >= 0.999)/N;

M.duration = t(end) - t(1);
M.N = N;

fprintf('\nMÉTRICAS (MATLAB, estilo Gazebo)\n');
fprintf('  RMS e_dp     = %7.4f m   (P95 = %7.4f m)\n', M.rms_edp, M.p95_edp);
fprintf('  RMS e_psi    = %7.3f °   (P95 = %7.3f °)\n', M.rms_epsi, M.p95_epsi);
fprintf('  RMS |u-ud|   = %7.3f m/s ;  ū = %7.3f m/s\n', M.rms_du, M.u_bar);
fprintf('  Saturação    = thrust %5.1f%% ; rudder %5.1f%%\n', M.thr_sat, M.rud_sat);
fprintf('  Duração      = %7.2f s   (N=%d)\n', M.duration, M.N);

% --- opcional: exportar um debug.mat compatível com o teu Octave ---
if nargin >= 7 && ~isempty(file_out)
    debug.time = t(:);
    debug.x = x(:);        debug.y = y(:);
    debug.x_d = xd(:);     debug.y_d = yd(:);
    debug.psi_d = psi_d(:);
    debug.e_dp = e_dp(:);
    debug.e_yaw = e_psi(:);                % rad
    debug.surge = u(:);
    debug.u_d   = ud(:);
    debug.motor_value  = n(:);
    debug.rudder_value = delta(:);
    % ω_d simples (diferença finita) só para referência
    dt = mean(diff(t));
    if isfinite(dt) && dt > 0
        debug.om_d = [diff(unwrap(psi_d))/dt, 0]';
    else
        debug.om_d = zeros(N,1);
    end
    save(file_out, '-struct', 'debug');
    fprintf('  » Guardado em %s (compatível com o script Octave).\n', file_out);
end

% --- linha pronta para uma tabela LaTeX (mesma ordem que usas) ---
M.latex_row = sprintf(['%7.3f & %7.3f & %7.3f & %7.3f & %7.3f & %7.3f & ' ...
                       '%5.1f & %5.1f & %7.2f\\\\'], ...
    M.rms_edp, M.p95_edp, M.rms_epsi, M.p95_epsi, M.rms_du, M.u_bar, ...
    M.thr_sat, M.rud_sat, M.duration);
end
