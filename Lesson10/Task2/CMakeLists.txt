cmake_minimum_required(VERSION 3.22.0)

# # # Project name # # #
project(class_hierarchy)

# # # Directories specification # # #
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src/")
set(INC_DIR "${CMAKE_SOURCE_DIR}/inc/")

# # # Source files specification # # #
file(GLOB SRC_FILES "${SRC_DIR}/*.cpp")

# # # Specify executable # # #
add_executable(class_hierarchy ${SRC_FILES})

# # # Directories adding # # #
include_directories(class_hierarchy ${INC_DIR})
