cmake_minimum_required(VERSION 3.22.0)
project(LeaverLib)
add_library(LeaverLib SHARED leaver_lib.h leaver_lib.cpp)
set_target_properties(LeaverLib PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})