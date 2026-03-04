% =====================================================================
% analyze_debug_separado.m   –   Glassy Challenge logger analysis
% =====================================================================
% 1. Ajuste o caminho abaixo para o seu ficheiro debug.mat.
% 2. No terminal do Octave, execute:   analyze_debug_separado
% 3. Será aberta UMA janela por variável (tempo no eixo-x).
% 4. No console, aparecem as estatísticas de média ± std de cada campo.
% ---------------------------------------------------------------------

clear; clc; close all;

% ---------- 1) Caminho do ficheiro -----------------------------------
matFile = '/home/diogo/Documents/GitHub/TeseGlassy/debug.mat';
if ~exist(matFile, 'file')
    error('Ficheiro não encontrado: %s', matFile);
end

% ---------- 2) Carregar dados ----------------------------------------
D = load(matFile);

% Campos padrão gravados pelo logger --------------------
campos = { 'time', 'e_np', 'ie_np', 'e_Va', 'ie_Va',  'e_yaw', 'ie_np', 'e_om', 'e_dp', ...
           'motor_value', 'rudder_value', 'surge', 'yaw' };

% Remove campos que não existem neste debug.mat ----------
campos = campos( ismember(campos, fieldnames(D)) );

fprintf('Campos carregados (%d): %s\n', numel(campos), strjoin(campos, ', '));

% ---------- 3) Gerar eixo-x (tempo ou índice) ------------------------
if ismember('time', campos)
    t = D.time(:) - D.time(1);               % tempo relativo em segundos
else
    t = (0:numel(D.(campos{1}))-1)';         % índice se “time” ausente
    warning('Campo "time" ausente – usando índice como eixo-x.');
end

% ---------- 4) Plot: uma janela por variável -------------------------
vars_to_plot = setdiff(campos, {'time'});     % exclui “time” do loop

% (opcional) se a sua placa de vídeo cortar linhas longas,
% descomente a linha seguinte para forçar renderização em software:
% opengl ("software");

for k = 1:numel(vars_to_plot)
    v = D.(vars_to_plot{k})(:);              % força vetor-coluna

    figure('Name', sprintf('%s – Glassy debug', vars_to_plot{k}), ...
           'NumberTitle', 'off', 'Color', 'w');

    plot(t, v, 'LineWidth', 1.2);
    grid on;
    xlabel('tempo [s]');
    ylabel(vars_to_plot{k}, 'Interpreter', 'none');
    title(vars_to_plot{k}, 'Interpreter', 'none');

    % (opcional) maximizar a janela – útil em desktops KDE/Gnome:
    % drawnow; pause(0.01); set(gcf, 'WindowState', 'maximized');
end

% ---------- 5) Estatísticas ------------------------------------------
%fprintf('\nMédia ± std:\n');
%for k = 1:numel(vars_to_plot)
%    v = D.(vars_to_plot{k})(:);
%    fprintf('  %-12s :  %8.3f  ±  %8.3f\n', ...
%            vars_to_plot{k}, mean(v, 'omitnan'), std(v, 'omitnan'));
%end

fprintf('\nScript concluído.\n');
