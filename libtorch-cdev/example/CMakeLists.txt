# Definitions
cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_PREFIX_PATH $ENV{TORCH_DIR})

# Define project
project( example )

# Dependencies
find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

# Build
add_executable(example example.cpp)
target_link_libraries(example ${TORCH_LIBRARIES})
get_target_property(DEBUG_VAR torch INTERFACE_INCLUDE_DIRECTORIES)
# set_property(TARGET example PROPERTY CXX_STANDARD 17)