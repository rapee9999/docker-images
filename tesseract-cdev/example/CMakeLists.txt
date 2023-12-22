# Definitions
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

# Define project
project(example)
add_executable( example example.cpp )

# Dependencies
find_package(OpenCV REQUIRED)
target_include_directories(example PUBLIC ${OpenCV_INCLUDE_DIRS} "/usr/include")
target_link_libraries(example ${OpenCV_LIBS} "/usr/lib/x86_64-linux-gnu/libtesseract.so")
get_target_property(DEBUG_VAR example INTERFACE_INCLUDE_DIRECTORIES)
set_property(TARGET example PROPERTY CXX_STANDARD 14)

# Compiler settings
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 14) # or 14, 17, etc.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
