cmake_minimum_required(VERSION 3.22.0)

project(Task1)

set(EXECUTABLE Task1)

# Lib directories
set(LIB_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/lib")

# Create executable
add_executable(${EXECUTABLE} main.cpp)

# Include directories
include_directories(${LIB_DIRS}/inc)

# Link libraries
target_link_libraries(${EXECUTABLE} GreeterLib)
