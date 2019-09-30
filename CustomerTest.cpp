#include "UnitTest++.h"
#include "Customer.h"

namespace
{

    TEST(register1)
    {
        std::string Result = registerUser(/*input 1*/);
        CHECK_EQUAL(/*expected result*/, Result);
    }

    TEST(register2)
    {
        std::string Result = registerUser(/*input 2*/);
        CHECK_EQUAL(/*expected result*/, Result);
    }

    TEST(authenticate1)
    {
        std::string Result = authenticate(/*input 1*/);
        CHECK_EQUAL(/*expected result*/, Result);
    }

    TEST(authenticate2)
    {
        std::string Result = authenticate(/*input 2*/);
        CHECK_EQUAL(/*expected result*/, Result);
    }

    TEST(remove1)
    {
        std::string Result = removeUser(/*input 1*/);
        CHECK_EQUAL(/*expected result*/, Result);
    }

    TEST(remove2)
    {
        std::string Result = removeUser(/*input 2*/);
        CHECK_EQUAL(/*expected result*/, Result);
    }
}
