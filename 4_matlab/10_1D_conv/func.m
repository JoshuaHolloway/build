% func performs 1D-'same'-convolution
% x is the Nx1 signal
% h is the Kx1 kernel
% y is the Nx1 filtered signal
function y = func(x, h)
  y = conv(x,h,'same');
end