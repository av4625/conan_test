add_library(unittests STATIC main.cpp)

target_link_libraries(unittests PRIVATE CONAN_PKG::gtest)

add_executable(mock_tests mock_test_tests.cpp)
target_link_libraries(mock_tests PRIVATE
    CONAN_PKG::gtest mock_test unittests)

add_test(NAME mock_tests COMMAND mock_tests)
