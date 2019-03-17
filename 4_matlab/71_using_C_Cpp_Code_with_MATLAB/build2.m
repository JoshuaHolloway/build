function build(target)
%   ÌŠÖ?ÍƒKEXtB^rhé‚½ß‚ÌŠÖ?Å‚
%
%   SYNTAX:     build mex@mexÅ?o
%               build lib@libÅ?o
%           
%   Copyright 2014-2016 The MathWorks, Inc.

    % Entry point Ö?:
    entryPoint = 'gaussianFilter';
    
    % æ‘œTCYÌ?sp:
    im = zeros(720,1080,'double');
    imsize = int32(size(im));
    output = zeros(size(im),'like', im);
    
    % ConfigurationIuWFNg:
    cfg = coder.config(target);
    
    % JX^Å?CÌƒ\[XR[h:
    cfg.CustomSource = 'gaussian3x3.c';
    
    % wb_t@C:
    cfg.CustomSourceCode = [ '#include "gaussian3x3.h"' ];
    
    % |[gÌ?ì?¬:
    cfg.GenerateReport = true;
    cfg.LaunchReport = false;

    % R[h:
    codegen(entryPoint,'-args', {im, imsize},'-config', cfg)
    
end
