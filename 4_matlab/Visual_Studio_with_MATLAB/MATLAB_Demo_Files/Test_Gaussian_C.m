%% Apply the Gaussian filter in MATLAB and use PSNR to compare the results with a C implementation of the filter
% Copyright 2014 The MathWorks, Inc.

function [y] = Test_Gaussian_C(RefImage, C_OutputImage, SIGMA)

hg = fspecial('gaussian',3,SIGMA);
outputm = imfilter(RefImage, hg);
y = psnr(outputm,C_OutputImage);
end