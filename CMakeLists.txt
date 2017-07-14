cmake_minimum_required(VERSION 2.8)
project(ConanCmakeDemo)
set (CMAKE_CXX_STANDARD 11)

set(CONAN_COMPILER 7.3)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(demo demo.cpp)
target_link_libraries(demo ${CONAN_LIBS})
