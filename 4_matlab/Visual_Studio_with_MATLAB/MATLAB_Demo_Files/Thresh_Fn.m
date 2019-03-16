%% Segmenting and Image using Thresholding 
% This example uses level based thresholding to segment the image

% Copyright 2014 The MathWorks, Inc.
function [y] = Thresh_Fn(LEVELS)
%% Read in image
I = imread('image_2.jpg');

%%  Convert to grayscale image
Igray = rgb2gray(I);
imshow(Igray);

%% Histogram
hist = imhist(Igray);
figure; 
stem(hist);

%% Create Mask by filteriing image with morphological operators
thresh = multithresh(Igray(:,:,1), LEVELS);
seg_I = imquantize(Igray(:,:,1),thresh);		% apply the thresholds to obtain segmented image
RGB = label2rgb(seg_I); 	 % convert to color image
figure;
imshowpair(I,RGB,'montage');  % display images side-by-side

end