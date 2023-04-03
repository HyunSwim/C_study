%% for
x = ones(1, 10)

for n = 2:6
    x(n) = 2*x(n-1);
    n
end
%%
while_flag = [1,1,1,1];
n = 1;
while while_flag
    n = n+1
end

%%
while_flag = [1,1,1,1];
n = 1;
while n < 10
    n = n+1
end