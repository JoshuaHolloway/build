function build(target)
%   ̊�?̓KEXtB^rh邽߂̊�?ł
%
%   SYNTAX:     build mex@mex�?o
%               build lib@lib�?o
%           
%   Copyright 2014-2016 The MathWorks, Inc.

    % Entry point �?:
    entryPoint = 'gaussianFilter';
    
    % 摜TCY�?sp:
    im = zeros(720,1080,'double');
    imsize = int32(size(im));
    output = zeros(size(im),'like', im);
    
    % ConfigurationIuWFNg:
    cfg = coder.config(target);
    
    % JX^�?C̃\[XR[h:
    cfg.CustomSource = 'gaussian3x3.c';
    
    % wb_t@C:
    cfg.CustomSourceCode = [ '#include "gaussian3x3.h"' ];
    
    % |[g�?�?�:
    cfg.GenerateReport = true;
    cfg.LaunchReport = false;

    % R[h:
    codegen(entryPoint,'-args', {im, imsize},'-config', cfg)
    
end
