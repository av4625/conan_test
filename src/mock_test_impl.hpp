#ifndef SRC_MOCK_TEST_IMPL_HPP
#define SRC_MOCK_TEST_IMPL_HPP

#include "mock_test.hpp"

class mock_test_impl : public mock_test
{
public:
    boost::container::string get_val() const;
};

#endif
