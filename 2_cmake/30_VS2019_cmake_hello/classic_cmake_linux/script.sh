mkdir build
cd build
rm CmakeCache.txt

## run cmake (inside build sub-directory)
cmake .. # Path to source directory
#cmake . # Path to already configured binary directory

## Run cmake build via executing generated build script
# make # Use if generated makefile (linux)
cmake --build . # build-system agnostic (. refers to current directory - simply need to specify the path to where the CMake cache is located)