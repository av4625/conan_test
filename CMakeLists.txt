cmake_minimum_required(VERSION 3.9.2)
project(conan_test)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# This works
#conan_basic_setup()

#find_package(Boost 1.74.0 EXACT REQUIRED COMPONENTS container)
#include_directories(${Boost_INCLUDE_DIRS})

#add_executable(conan_test main.cpp)
#target_link_libraries(conan_test Boost::container)

conan_basic_setup(TARGETS)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)
