#include <gtest/gtest.h>
#include <boost/container/string.hpp>
#include <mock_test_impl.hpp>
#include "mock_test_mock.hpp"

TEST(GetVal, GetVal)
{
    mock_test_impl m;
    EXPECT_EQ(boost::container::string("Hello World!"), m.get_val());
}

TEST(GetValMock, GetValMock)
{
    mock_test_mock m;
}
