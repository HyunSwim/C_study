z = peaks(100);

figure(1)
surf(z)

zmin = floor(min(z(:)));
zmax = ceil(min(z(:)));
zinc = (zmax-zmin) / 40;
zlevs = zmin : zinc : zmax;

figure(2)
[C, h] = contour(z, zlevs)
clabel(C, h)
