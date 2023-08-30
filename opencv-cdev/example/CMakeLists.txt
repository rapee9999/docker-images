# Definitions
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

# Define project
project( example )

# Dependencies
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Build
add_executable( example example.cpp )
target_link_libraries( example ${OpenCV_LIBS} )
