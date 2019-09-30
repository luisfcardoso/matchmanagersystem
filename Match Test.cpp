#include "UnitTest++.h"
#include "Match.h"

namespace
{
    Match match1;

    TEST(searchMatch1)
    {
        bool Result = match1.searchMatch(10, 7, 2019, 25, 4, 2020, "Rio", "RJ");
        CHECK_EQUAL(false, Result);
    }
 /*
    TEST(searchMatch2)
    {
        int Result = searchMatch(10, 7, 2019, 25, 4, 2020, "Rio", "RJ");
        CHECK_EQUAL(0, Result);
    }
*/
}

