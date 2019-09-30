#include "UnitTest++.h"
#include "Customer.h"

namespace
{

    TEST(register1)
    {
        Customer customerTest("15485555451","123456789123456","1234567891234567", "253", "12","25");
        std::string Result = customerTest.registerUser();
        CHECK_EQUAL("The customer was registered successfully!", Result);
    }
    /*
    TEST(register2)
    {
        std::string Result = registerUser();
        CHECK_EQUAL(, Result);
    }

    TEST(authenticate1)
    {
        std::string Result = authenticate(input 1);
        CHECK_EQUAL(, Result);
    }

    TEST(authenticate2)
    {
        std::string Result = authenticate();
        CHECK_EQUAL(, Result);
    }

    TEST(remove1)
    {
        std::string Result = removeUser();
        CHECK_EQUAL(, Result);
    }

    TEST(remove2)
    {
        std::string Result = removeUser();
        CHECK_EQUAL(, Result);
    } */
}
