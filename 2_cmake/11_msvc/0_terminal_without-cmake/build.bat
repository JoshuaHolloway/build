@echo off

mkdir build
pushd build
REM cl -Zi ..\src\main.cpp user32.lib
cl -Zi ..\src\main.cpp
popd