#ifndef SRC_MOCK_TEST_HPP
#define SRC_MOCK_TEST_HPP

#include <boost/container/container_fwd.hpp>

class mock_test
{
public:
    virtual boost::container::string get_val() const = 0;
};

#endif
