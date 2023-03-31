t_stp = 0.001;
t_sim = 0:t_stp:1;
freq = 2;
noise = rand(size(t_sim));
x_sim = sin(2 * pi * t_sim * freq);
n_sim = x_sim + noise;
m_dat = [t_sim; x_sim; n_sim];
openvar('m_dat')
%%
