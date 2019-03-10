x = double(rgb2gray(imread('lena_512.png')));
y = func(x);
figure
imshow(uint8(y))