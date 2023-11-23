cmake_minimum_required(VERSION 3.1)
project(GameLibrary)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../bin)

add_library(GameLibrary SHARED structs.cpp)
