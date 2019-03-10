@echo off
set MATLAB=C:\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=func_mex
set MEX_NAME=func_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for func > func_mex.mki
echo COMPILER=%COMPILER%>> func_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> func_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> func_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> func_mex.mki
echo LINKER=%LINKER%>> func_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> func_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> func_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> func_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> func_mex.mki
echo OMPFLAGS= >> func_mex.mki
echo OMPLINKFLAGS= >> func_mex.mki
echo EMC_COMPILER=msvc150>> func_mex.mki
echo EMC_CONFIG=optim>> func_mex.mki
"C:\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f func_mex.mk
