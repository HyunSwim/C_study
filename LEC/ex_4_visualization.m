x = linspace(0, 2*pi, 25); % 등차수열을 만들어주는 명령어
% 0 : 0.1 : 2*pi
y = sin(x);
z = sin(x-pi/4);

figure(5)
plot(x, y, 'b');
hold on; % 없을 시? -> plot(x, y)가 사라지게 됨
plot(x, z, 'r');
% hold off; % 사용을 권함

plot(x, y, 'color', [0.3010 0.7450 0.9330]);

plot(x, y, '-b');
hold on; grid on;
plot(x, z, '-*r', 'LineWidth', 2.0, 'MarkerSize');
hold off;

%%
x = linspace(0, 2*pi, 25); % 등차수열을 만들어주는 명령어
y = sin(x);
n = rand(size(y));
z = y + n - mean(n);

n_max = find(n= max(n));
n_min = find(n= min(n));

figure(10)
plot(x, z);
hold on; grid on;
plot(x, y);
hold off;

%%
% repmat
% sortrows

% 12. Data type

% 13. Operation
% 14. Data Visualization
% - figure()
% - plot()
% - hold on / hold off
% - grid on

%%
x = linspace(0, 2*pi, 25); % 등차수열을 만들어주는 명령어
y = sin(x);
n = rand(size(y));
z = y + n - mean(n);

n_max = find(n== max(n));
n_min = find(n== min(n));

figure(10)
plot(x, z);
hold on; grid on;
plot(x, y);
hold off;
legend('Noise', 'Refer', ...
        'Location', 'best', ...
        'NumColumns', 2)
xlabel('time [s]')
ylabel('data [-]')
title('sin(2 \cdot \pi \cdot time)')
xlim([0,1])
ylim([-1.5, 1.5])
xticks([0,3,6])
xticklabels({'0', '\pi', '2pi'})
