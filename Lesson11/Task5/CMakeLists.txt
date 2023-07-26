cmake_minimum_required(VERSION 3.22.0)
project(Task5)

set(EXECUTABLE Task5)

# # # Library directories
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib")

# # # Include directories
set(INC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib/inc")

# # # DLL files
file(GLOB DLL_FILES "${LIB_DIR}/*.dll")

find_library(SHAPES_LIB NAME ShapesLib PATHS ${LIB_DIR})

include_directories(${INC_DIR})

add_executable(${EXECUTABLE} Task5.cpp)

target_link_libraries(${EXECUTABLE} ${SHAPES_LIB})

# # # Move DLL files to build directory
add_custom_command(TARGET ${EXECUTABLE}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy ${DLL_FILES} ${CMAKE_BINARY_DIR}
)
