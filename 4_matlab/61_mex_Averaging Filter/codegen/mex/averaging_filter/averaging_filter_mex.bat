@echo off
set MATLAB=C:\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=averaging_filter_mex
set MEX_NAME=averaging_filter_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for averaging_filter > averaging_filter_mex.mki
echo COMPILER=%COMPILER%>> averaging_filter_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> averaging_filter_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> averaging_filter_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> averaging_filter_mex.mki
echo LINKER=%LINKER%>> averaging_filter_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> averaging_filter_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> averaging_filter_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> averaging_filter_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> averaging_filter_mex.mki
echo OMPFLAGS= >> averaging_filter_mex.mki
echo OMPLINKFLAGS= >> averaging_filter_mex.mki
echo EMC_COMPILER=msvc150>> averaging_filter_mex.mki
echo EMC_CONFIG=optim>> averaging_filter_mex.mki
"C:\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f averaging_filter_mex.mk
