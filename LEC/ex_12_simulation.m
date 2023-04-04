% Simulation Time
t0 = 0;
tf = 15;
% Initial Value
y0 = [20; 20];
% Simulation Result
[x, y] = ode45(@lotka_ode, ...
                [t0, tf], ...
                y0);
% Plot
figure(1)
plot(x, y, 'LineWidth', 2);
figure(2)
plot(y(:, 1), y(:,2), 'LineWidth', 2);

