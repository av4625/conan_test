cmake_minimum_required(VERSION 3.9.2)
project(conan_test)

set(CMAKE_CXX_STANDARD 20)

# We default to Release build type if DCMAKE_BUILD_TYPE not provided
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(third_party)
