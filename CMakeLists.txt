cmake_minimum_required(VERSION 3.14)
project(multimodule_app)

# Set the output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/source/library)

# Add library
add_library(rootmodule SHARED source/library/speaker.cpp)

# Add executable
add_executable(demoapplication source/executable/app.cpp)

# Link the executable with the library
target_link_libraries(demoapplication rootmodule)
