function dydt = lotka_ode(t, y) % y[k+1] = y[k] + t_stp * dy/dt;
    % Parameter
    alpha = 0.02;
    beta = 0.01;
    % ODE
    dydt = [(1 - alpha * y(2)) * y(1); ...
            (-1 + beta * y(1))  * y(2)];
end