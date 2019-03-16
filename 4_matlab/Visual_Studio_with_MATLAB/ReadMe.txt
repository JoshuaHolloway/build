The ML_Engine_Demo_Visual_Studio contains the solution/project that is connected to MATLAB via MATLAB Engine.

## Environment Variables:
    MATLABROOT = C:\MATLAB\R2018b
    
## System:
    OS:  Microsoft Windows 10 Pro Version 10.0.17763 Build 17763
    CPU: Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz, 4001 Mhz, 4 Core(s), 4 Logical Processor(s)

## VS:
    Microsoft Visual Studio Community 2017 
    Version 15.9.6
    VisualStudio.15.Release/15.9.6+28307.344
    Microsoft .NET Framework
    Version 4.7.03190

    VC++ 2017 version 15.9 v14.16 latest v141 tools

## Properties for VS projects using MATLAB generated .dll's
    Output/Intermediate Directory:
        $(SolutionDir)$(ProjectName)\bin\$(Platform)-$(Configuration)\
        $(SolutionDir)$(ProjectName)\bin-int\$(Platform)-$(Configuration)\

    Additional Include Directories:
        $(SolutionDir)..\codegen\dll\func;$(MATLABROOT)\extern\include

    Additional Library Directories:
        $(SolutionDir)..\codegen\dll\func

    Additional Dependencies
        func.lib
        
## MATLAB:
    R2018b (9.5.0.944444)
    64-bit (win64)
    August 28, 2018


# Integrating MATLAB and C
## https://youtu.be/dhzehParZ40

# MATLAB and C/C++ Resources
## https://www.mathworks.com/campaigns/portals/matlab-coder.html