#!/bin/bash

# Build the project and run the app
if [ -d build ]; then
    rm -rf build
fi

mkdir -p build
cmake -S . -B build
cmake --build build --config Debug
cd build/bin
./demoapplication JohnDow 44
