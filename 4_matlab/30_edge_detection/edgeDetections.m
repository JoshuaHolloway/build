%% Edge Detection on Images
% This example shows how to generate a standalone C library from MATLAB code 
% that implements a simple Sobel filter that performs edge detection on images. 
% The example also shows how to generate and test a MEX function in MATLAB prior 
% to generating C code to verify that the MATLAB code is suitable for code generation.
%% About the |sobel| Function
% The |sobel.m| function takes an image (represented as a double matrix) and 
% a threshold value and returns an image with the edges detected (based on the 
% threshold value).

type sobel
%% Generate the MEX Function
% Generate a MEX function using the |codegen| command.

codegen sobel
%% 
% Before generating C code, you should first test the MEX function in MATLAB 
% to ensure that it is functionally equivalent to the original MATLAB code and 
% that no run-time errors occur. By default, |codegen| generates a MEX function 
% named |sobel_mex| in the current folder. This allows you to test the MATLAB 
% code and MEX function and compare the results.
%% Read in the Original Image
% Use the standard |imread| command.

im = imread('hello.jpg');
image(im);
%% Convert Image to a Grayscale Version
% Convert the color image (shown above) to an equivalent grayscale image with 
% normalized values (0.0 for black, 1.0 for white).

gray = (0.2989 * double(im(:,:,1)) + 0.5870 * double(im(:,:,2)) + 0.1140 * double(im(:,:,3)))/255;
%% Run the MEX Function (The Sobel Filter)
% Pass the normalized image and a threshold value.

edgeIm = sobel_mex(gray, 0.7);
%% Display the Result
%%
im3 = repmat(edgeIm, [1 1 3]);
image(im3);
%% Generate Standalone C Code
%%
codegen -config coder.config('lib') sobel
%% 
% Using |codegen| with the |-config coder.config('lib')| option produces 
% a standalone C library. By default, the code generated for the library is in 
% the folder |codegen/lib/sobel/|.
%% Inspect the Generated Function
%%
type codegen/lib/sobel/sobel.c
%% 
% _Copyright 2018 The MathWorks, Inc._