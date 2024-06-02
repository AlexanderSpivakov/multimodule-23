#!/bin/bash

# build the project and run the app
if [ -f build ]; then
    rm build
fi

mkdir -p build
cmake -S source -B build
cmake --build build --config=Debug
cd build/bin
./demoapplication JohnDow 44
