#!/bin/bash

# Generate llvm bit-code
clang sum.c -emit-llvm -c -o sum.bc

# Generate llvm assembly representation
clang sum.c -emit-llvm -S -c -o sum.ll

clear
cat sum.ll