@echo off
mkdir bin
pushd bin

ls -la
cl -Zi ..\src\main.c ..\src\function.c

popd
