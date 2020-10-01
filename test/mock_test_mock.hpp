#ifndef MOCK_TEST_MOCK_HPP
#define MOCK_TEST_MOCK_HPP

#include <gmock/gmock.h>
#include <mock_test.hpp>

class mock_test_mock : public mock_test
{
public:
    MOCK_CONST_METHOD0(get_val, boost::container::string());
};

#endif
