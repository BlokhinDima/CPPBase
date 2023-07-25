cmake_minimum_required(VERSION 3.22.0)
project(Task3)

set(EXECUTABLE Task3)

# # # Libraries directory
set(LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib")

# # # DLL files
file(GLOB DLL_FILES "${LIB_DIR}/*.dll")

find_library(LEAVER_LIB NAME LeaverLib PATHS ${LIB_DIR})

include_directories(${LIB_DIR})

add_executable(${EXECUTABLE} Task3.cpp)

target_link_libraries(${EXECUTABLE} ${LEAVER_LIB})

# # # Move DLL files to build directory
add_custom_command(TARGET ${EXECUTABLE}
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy ${DLL_FILES} ${CMAKE_BINARY_DIR}
)
