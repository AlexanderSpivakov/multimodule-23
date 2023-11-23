cmake_minimum_required(VERSION 3.1)
project(GameScript)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

add_executable(GameScript main.cpp)
include_directories(../library)
target_link_libraries(GameScript PRIVATE GameLibrary)
