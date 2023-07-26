cmake_minimum_required(VERSION 3.22.0)
project(ShapesLib)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(INC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/inc")

file(GLOB SRC_FILES "${SRC_DIR}/*.cpp")
file(GLOB INC_FILES "${INC_DIR}/*.h")

include_directories(${INC_DIR})
add_library(${PROJECT_NAME} SHARED ${INC_FILES} ${SRC_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
