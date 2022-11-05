add_library(unittests STATIC main.cpp)

target_link_libraries(unittests PUBLIC GTest::gtest)

add_executable(mock_tests mock_test_tests.cpp)
target_link_libraries(mock_tests PRIVATE GTest::gmock mock_test unittests)

add_test(NAME mock_tests COMMAND mock_tests)
