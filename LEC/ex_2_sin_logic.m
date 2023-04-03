t_stp = 0.001;
t_sim = 0:t_stp:1;
freq = 2;
noise_1 = rand(size(t_sim)) .* 2;
noise_2 = rand(size(t_sim)) .* 3;
noise_3 = rand(size(t_sim)) .* 1;
x_sim = sin(2 * pi * t_sim * freq);


n_sim_1 = x_sim + noise_1 - mean(noise_1);
n_sim_2 = x_sim + noise_2 - mean(noise_2);
n_sim_3 = x_sim + noise_3 - mean(noise_3);
t_point = ((t_sim >= 0.2) & (t_sim <= 0.4));

n_dat_0 = x_sim(t_point);
n_dat_1 = n_sim_1(t_point);
n_dat_2 = n_sim_2(t_point);
n_dat_3 = n_sim_3(t_point);

error_1 = sum(abs(n_dat_0 - n_dat_1));
error_2 = sum(abs(n_dat_0 - n_dat_2));
error_3 = sum(abs(n_dat_0 - n_dat_3));

error_exp = [1, error_1;2, error_2; 3, error_3]
error_srt = sortrows(error_exp, 2)

figure(1)
plot(x_sim); hold on; grid on;
plot(n_sim_1);
plot(n_sim_2);
plot(n_sim_3); hold off;
legend('ref', 'out1', 'out2', 'out3')
xlim([0, 1000]);

figure(11)
plot(n_dat_0); hold on; grid on;
plot(n_dat_1);
plot(n_dat_2);
plot(n_dat_3); hold off;
legend('ref', 'out1', 'out2', 'out3')