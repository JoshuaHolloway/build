clc, clear, close all;

Img = imread('Toy_Candy_Image.jpg');
grayImg = rgb2gray(Img);    % Convert color image to grayscale
im = double(grayImg);       % Casting different data types

imshow(im, []);

%% Call Gaussian filter to smooth out image
imsize = int32(size(im));

% MATLAB Gaussian Interpreted code
filteredImg = gaussianFilter(im, imsize);
imshow(filteredImg, []);

%% Call MATLAB Edge Detection
thresholdValue = 0.41;
edges = edge_detection(filteredImg, thresholdValue);

% Display output:
imshow(edges);

%% Calling Custom Gaussian C-Code via MEX to smooth out
imsize = int32(size(im));
C_filteredImg = gaussianFilter_mex(im,imsize);
imshow(C_filtered, []);

%% Call MATLAB Edge Detection after MEX call
thresholdValue = 0.41;
