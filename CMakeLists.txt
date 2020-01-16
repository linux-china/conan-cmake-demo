cmake_minimum_required(VERSION 3.15)
project(ConanCmakeDemo)

set(CMAKE_CXX_STANDARD 17)

# Download automatically, you can also just copy the conan.cmake file
if (NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
            "${CMAKE_BINARY_DIR}/conan.cmake")
endif ()

include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(CONANFILE conanfile.txt
        BASIC_SETUP CMAKE_TARGETS
        BUILD missing)

#### target
add_executable(demo demo.cpp)
target_link_libraries(demo ${CONAN_LIBS})


##### unit test
enable_testing()
SET(TEST_SRC test/gtest.cpp
        test/condition_test.cpp
        )

add_executable(runUnitTests ${TEST_SRC})
TARGET_LINK_LIBRARIES(runUnitTests ${CONAN_LIBS})
