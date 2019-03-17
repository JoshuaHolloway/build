@echo off
set MATLAB=C:\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=gaussianFilter_mex
set MEX_NAME=gaussianFilter_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for gaussianFilter > gaussianFilter_mex.mki
echo COMPILER=%COMPILER%>> gaussianFilter_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> gaussianFilter_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> gaussianFilter_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> gaussianFilter_mex.mki
echo LINKER=%LINKER%>> gaussianFilter_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> gaussianFilter_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> gaussianFilter_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> gaussianFilter_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> gaussianFilter_mex.mki
echo OMPFLAGS= >> gaussianFilter_mex.mki
echo OMPLINKFLAGS= >> gaussianFilter_mex.mki
echo EMC_COMPILER=msvc150>> gaussianFilter_mex.mki
echo EMC_CONFIG=optim>> gaussianFilter_mex.mki
"C:\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f gaussianFilter_mex.mk
