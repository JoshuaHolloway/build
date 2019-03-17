N = 512; % NxN 2D-signal
K = 3;   % KxK filter-kernel

% Use below to automatically determine dimensions in code-generation
func(rand(N,N), rand(K,K)); % y = conv2(x,h,'same')

% Test against below in C
x = double(rgb2gray(imread('lena_512.png')));

h = ones(3,3) / 9;
% h =
%      1/9     1/9     1/9
%      1/9     1/9     1/9
%      1/9     1/9     1/9

y = conv2(x,h,'same');
imwrite(y,'y_gold.png');
clc, close all;
figure, imshow(uint8(y))
title('The actual pixel values of the saved file named y_gold.png should be compared quantitatively against the generated C code');