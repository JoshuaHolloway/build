function y = func(x)
    tform = affine2d([1 0 0; .5 1 0; 0 0 1]);
    y = imwarp(x,tform);
end