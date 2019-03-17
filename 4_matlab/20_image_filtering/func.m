% func performs 2D-'same'-convolution
% x is the NxN signal
% h is the KxK kernel
% y is the NxN filtered signal
function y = func(x, h)
  y = conv2(x,h,'same');
end