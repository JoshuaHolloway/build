function build(target)
% BUILD is a build function fo Embedded MATLAB
%
% SYNTAX:   build mex
%           build lib

    % Entry point function:
    entryPoint = 'gaussianFilter';
    
    % Example input
    im = zeros(720,1080,'double');
    imsize = int32(size(im));
    output = zeros(size(im),'like',im);
    
    % Configuration object:
    cfg = coder.config(target);
    
    % Custom source files:
    cfg.CustomSource = 'C:\dev\build\4_matlab\71_using_C_Cpp_Code_with_MATLAB\gaussian3x3.c';
    
    % Custom source code:
    cfg.CustomSourceCode = ['#include "gaussian3x3.h"'];
    
    % Generate and Launch Report:
    cfg.GenerateReport = true;
    cfg.LaunchReport = false;
    
    % Generate Code:
    codegen(entryPoint,'-args',{im,imsize},'-config',cfg);
    
end