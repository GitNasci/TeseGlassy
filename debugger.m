%% Carregar dados
load('debug.mat');

%% Erros (e_np, ie_np, e_Va, ie_Va)
figure('Name', 'Erros');
subplot(2,2,1);
plot(time, e_np, 'LineWidth', 1.5);
title('Erro de posição normal (e_{np})'); xlabel('Tempo [s]'); ylabel('e_{np}'); grid on;

subplot(2,2,2);
plot(time, ie_np, 'LineWidth', 1.5);
title('Erro integral de posição (ie_{np})'); xlabel('Tempo [s]'); ylabel('ie_{np}'); grid on;

subplot(2,2,3);
plot(time, e_Va, 'LineWidth', 1.5);
title('Erro de velocidade longitudinal (e_{Va})'); xlabel('Tempo [s]'); ylabel('e_{Va}'); grid on;

subplot(2,2,4);
plot(time, ie_Va, 'LineWidth', 1.5);
title('Erro integral de velocidade (ie_{Va})'); xlabel('Tempo [s]'); ylabel('ie_{Va}'); grid on;

%% Comandos de controlo
figure('Name', 'Comandos de Controlo');
subplot(2,1,1);
plot(time, motor_value, 'LineWidth', 1.5);
title('Comando de motor (motor\_value)'); xlabel('Tempo [s]'); ylabel('Motor'); grid on;

subplot(2,1,2);
plot(time, rudder_value, 'LineWidth', 1.5);
title('Comando de leme (rudder\_value)'); xlabel('Tempo [s]'); ylabel('Rudder'); grid on;

%% Estados observados
figure('Name', 'Estados do Barco');
subplot(2,1,1);
plot(time, surge, 'LineWidth', 1.5);
title('Velocidade surge'); xlabel('Tempo [s]'); ylabel('surge [m/s]'); grid on;

subplot(2,1,2);
plot(time, yaw, 'LineWidth', 1.5);
title('Orientação (yaw)'); xlabel('Tempo [s]'); ylabel('yaw [rad]'); grid on;
