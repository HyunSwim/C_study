%%
close all; clear all; clc;

%%
step = 0.01;
time = 0:step:10;
sig_0 = sin(2*pi*time);
sig_1 = sin(2*pi*time) + rand(size(sig_0));

%%
figure(1)
plot(time, sig_1);
hold on; grid on;
plot(time, sig_0, 'LineWidth', 4);
p_1 = plot(time(1), sig_0(1), 's', ...
            'MarkerFaceColor', 'b');
p_2 = plot(time(1), sig_1(1), 's', ...
            'MarkerFaceColor', 'g', ...
            'MarkerSize', 20);
hold off;

%%
for k = 2 : length(time)
    p_1.XData = time(k);
    p_1.YData = sig_0(k);
    p_2.XData = time(k);
    p_2.YData = sig_1(k);
    drawnow;
end

%%
close all; clear all; clc;

step = 0.01;
time = 0:step:10;
sig_0 = sin(2*pi*time);
noise = rand(size(sig_0));
sig_1 = sig_0 + noise - mean(noise);

figure(1)
plot(time, sig_1);

%%
window_size = 20;
filter_den = 1;
filter_num = (1/window_size) * ones(1, window_size);

fillter_sig_1 = filter(filter_num, filter_den, data_sig);