#!/bin/bash

cd "$(dirname "$0")" || exit 1

#configure only if the build directory is not configured yet 
if [ ! -f build/CMakeCache.txt ]; then
    cmake -S . -B build || exit 1
fi

#build updated code and execute the code
cmake --build build && ./build/my_program || exit 1
