function y = gaussianFilter(x, imsize) %#codegen
    % Pre-allocate output array
    y = coder.nullcopy(zeros(720,1080));
    
    if coder.target('MATLAB')
       % Execute  interpreted MATLAB code:
       fprintf('Running interpreted MATLAB code...\n\n');
       SIGMA = 0.5;
       hg = fspecial('gaussian',30,SIGMA);
       y = imfilter(x,hg);
    else
        % Generate C-code using existing C-code:
        coder.updateBuildInfo('addSourceFiles', 'Gaussian3x3.c');
        coder.updateBuildInfo('addIncludePaths', 'C:\MATLAB_Demos\Coder_Edge_Detection');
        fprintf('Running Custom C-Code...\n\n');
        coder.ceval('gaussian3x3',coder.ref(x),coder.ref(imsize),coder.ref(y));
    end
end