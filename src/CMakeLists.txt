add_library(mock_test mock_test_impl.cpp)
target_link_libraries(mock_test PUBLIC CONAN_PKG::boost)
