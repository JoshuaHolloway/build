@echo off
set MATLAB=C:\MATLAB\R2018b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\MATLAB\R2018b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=hello_world_mex
set MEX_NAME=hello_world_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for hello_world > hello_world_mex.mki
echo COMPILER=%COMPILER%>> hello_world_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> hello_world_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> hello_world_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> hello_world_mex.mki
echo LINKER=%LINKER%>> hello_world_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> hello_world_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> hello_world_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> hello_world_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> hello_world_mex.mki
echo OMPFLAGS= >> hello_world_mex.mki
echo OMPLINKFLAGS= >> hello_world_mex.mki
echo EMC_COMPILER=msvc150>> hello_world_mex.mki
echo EMC_CONFIG=optim>> hello_world_mex.mki
"C:\MATLAB\R2018b\bin\win64\gmake" -j 1 -B -f hello_world_mex.mk
