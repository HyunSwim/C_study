%% If
x = [10, 8, 7];
min_val = 2;
max_val = 11;

if (x >= min_val) & (x <= max_val)
    disp('Good');
elseif (x > max_val)
    disp('Large');
else
    disp('Small');
end

%% Switch
plot_type = input('Enter : ', 's')
x = [12, 64, 24];

switch plot_type
    case 'bar'
        bar(x)
    case {'pie', 'pie3'}
        pie(x)
    otherwise
        warning('Unexpected');
end