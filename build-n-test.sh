#!/bin/bash

mkdir -p build
cd build
cmake ..
cmake --build .
cd ../build/bin/Debug
./demoapplication "John" "30"