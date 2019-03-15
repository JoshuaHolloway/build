clc, clear, close all;
I  = imread('lena_512.png');
grayImage = rgb2gray(I);
% points = detectSURFFeatures(grayImage);
points = func_detectSURFFeatures(grayImage);
[features, points] = extractFeatures(grayImage, points);
figure, current_img = I;
imshow(current_img), hold on;
plot(selectStrongest(points, 50));