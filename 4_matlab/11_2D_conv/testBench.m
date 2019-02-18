N = 4; % NxN 2D-signal
K = 3; % KxK filter-kernel

% Use below to automatically determine dimensions in code-generation
func(rand(N,N), rand(K,K)) % y = conv2(x,h,'same')

% Test against below in C
x = reshape([1:16],[4,4])';
% x =
%      1     2     3     4
%      5     6     7     8
%      9    10    11    12
%     13    14    15    16

h = ones(3,3);
% h =
%      1     1     1
%      1     1     1
%      1     1     1

y = conv2(x,h,'same')
% y =
%     14    24    30    22
%     33    54    63    45
%     57    90    99    69
%     46    72    78    54