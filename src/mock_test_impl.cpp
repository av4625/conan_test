#include "mock_test_impl.hpp"

#include <boost/container/string.hpp>

boost::container::string mock_test_impl::get_val() const
{
    return "Hello World!";
}
