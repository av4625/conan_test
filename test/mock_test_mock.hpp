#ifndef TEST_MOCK_TEST_MOCK_HPP
#define TEST_MOCK_TEST_MOCK_HPP

#include <gmock/gmock.h>
#include <mock_test.hpp>

class mock_test_mock : public mock_test
{
public:
    MOCK_METHOD(boost::container::string, get_val, (), (const, override));
};

#endif
