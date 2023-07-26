cmake_minimum_required(VERSION 3.22.0)
project(LeaverLib)
add_library(${PROJECT_NAME} SHARED leaver_lib.h leaver_lib.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})