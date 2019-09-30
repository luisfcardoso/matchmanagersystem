#include "UnitTest++.h"
#include "Customer.h"

namespace
{
    Customer customerTest1("15485555451","123456789123456","1234567891234567", "253", "12","25");
    Customer customerTest2("154855554","123456789123456","1234567891234567", "253", "12","25");
    Customer customerTest3("15485555441","123456789123456");

    TEST(register1)
    {
        std::string Result = customerTest1.registerUser();
        CHECK_EQUAL("The customer was registered successfully!", Result);
    }

    TEST(register2)
    {
        std::string Result = customerTest2.registerUser();
        CHECK_EQUAL("The customer wasn't registered! Please check the values you insert or if the customer already exists.", Result);
    }

    TEST(authenticate1)
    {
        std::string Result = customerTest1.authenticate();
        CHECK_EQUAL("You logged in!", Result);
    }

        TEST(authenticate2)
    {
        std::string Result = customerTest2.authenticate();
        CHECK_EQUAL("You weren't log in! Please check the cpf and the password.", Result);
    }


    TEST(authenticate3)
    {
        std::string Result = customerTest3.authenticate();
        CHECK_EQUAL("You weren't log in! Please check the cpf and the password.", Result);
    }

    TEST(remove1)
    {
        std::string Result = customerTest3.removeUser();
        CHECK_EQUAL("The customer was removed successfully!", Result);
    }

    TEST(remove2)
    {
        std::string Result = customerTest2.removeUser();
        CHECK_EQUAL("The customer wasn't removed! Please check the values you insert or if the customer exists.", Result);
    }
}
