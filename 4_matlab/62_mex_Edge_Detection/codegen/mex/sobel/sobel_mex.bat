@echo off
set MATLAB=C:\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=sobel_mex
set MEX_NAME=sobel_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for sobel > sobel_mex.mki
echo COMPILER=%COMPILER%>> sobel_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> sobel_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> sobel_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> sobel_mex.mki
echo LINKER=%LINKER%>> sobel_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> sobel_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> sobel_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> sobel_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> sobel_mex.mki
echo OMPFLAGS=/openmp >> sobel_mex.mki
echo OMPLINKFLAGS=/nodefaultlib:vcomp /LIBPATH:"C:\MATLAB\R2018b\bin\win64" >> sobel_mex.mki
echo EMC_COMPILER=msvc150>> sobel_mex.mki
echo EMC_CONFIG=optim>> sobel_mex.mki
"C:\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f sobel_mex.mk
