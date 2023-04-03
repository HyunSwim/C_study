x = 0 : 0.001 : 1;
y = sin(2 * pi * x * 2);

n1 = rand(size(y)) .* 1;
n2 = rand(size(y)) .* 3;
n3 = rand(size(y)) .* 2;

figure(12)
subplot(2,2,1)
plot(x, y + n1);
subplot(2,2,2)
plot(x, y + n2);
subplot(2,2,4)
plot(x, y);
subplot(2,2,3)
plot(x, y + n3);
grid on; % 3번에서만 grid가 나타남

%%
x = 0 : 0.001 : 1;
y = sin(2 * pi * x * 2);

n1 = rand(size(y)) .* 1;
n2 = rand(size(y)) .* 3;
n3 = rand(size(y)) .* 2;

figure(12)
subplot(1,4,1)
plot(x, y + n1);
subplot(1,4,2)
plot(x, y + n2);
subplot(1,4,4)
plot(x, y);
subplot(1,4,3)
plot(x, y + n3);
grid on; % 3번에서만 grid가 나타남