%% Call C Code
%
% This example shows how to integrate a simple C function with MATLAB(R)
% code by using |coder.ceval|. 
% Consider the MATLAB function, |mathOps|: 
%
% <include>mathOps.m</include>
%
% For this example, suppose that you want to implement the addition operation 
% by using external C code. Consider the C function, |adder|, implemented in 
% the file |adder.c|: 
%
% <include>adder.c</include>
%
% To integrate |adder| with your MATLAB code, you need a header file
% that contains the function prototype. See the file |adder.h|:
%
% <include>adder.h</include>
%
% Use the |coder.ceval| command to call the C function in |mathOpsIntegrated.m|.
% Include the header file by using |coder.cinclude|.
%
% <include>mathOpsIntegrated.m</include>
%
% To generate code, use the |codegen| command. Specify the  
% source file |adder.c| as an input. 
% To test the C code, execute the MEX function and inspect 
% the output results.

codegen mathOpsIntegrated -args {1, 2} adder.c

[test1, test2] = mathOpsIntegrated_mex(10, 20)


%% 
% Copyright 2012 The MathWorks, Inc.