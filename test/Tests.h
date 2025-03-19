#pragma once
#include <cxxtest/TestSuite.h>
#include "MathLib.h"

class MyTestSuite :public CxxTest::TestSuite
{
public:
    void testArguments(void) {
        int res = 1;
        ETSM_ASSERT_EQUALS("Error", res == 1, true);
    }

    void testNegativeD(void) {
        int res = 1;
        ETSM_ASSERT_EQUALS("Error", res == 1, true);
    }

    void testPositiveValues(void) {
        int res = 1;
        ETSM_ASSERT_EQUALS("Error", res == 1, true);
    }
};