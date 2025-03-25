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

    // Equivalence class tests

    // Linear equation a == 0, b != 0
    void LinearOneRootTest(void)
    {
        double a = 0;
        double b = 1;
        double c = 2;

        double x1;
        double x2;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 0, b = 1, c = 2. Linear equation is failed. Expected ONE_ROOT.", res == ONE_ROOT, true);
    }

    // Linear equation a == 0, b == 0
    void LinearNoRootsTest(void)
    {
        double a = 0;
        double b = 0;
        double c = 2;

        double x1;
        double x2;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 0, b = 0, c = 2. Linear equation is failed. Expected NO_ROOTS.", res == NO_ROOTS, true);
    }

    // Quadrature equation. b^2 < 4ac -> D < 0
    void QuadratureNoRootsTest(void)
    {
        double a = 2;
        double b = 1;
        double c = 2;

        double x1;
        double x2;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 2, b = 1, c = 2. Quadrature equation is failed. Expected NO_ROOTS.", res == NO_ROOTS, true);
    }

    // Quadrature equation. b^2 = 4ac -> D == 0
    void QuadratureOneRootTest(void)
    {
        double a = 1;
        double b = 2;
        double c = 1;

        double x1;
        double x2;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 1, b = 2, c = 1. Quadrature equation is failed. Expected ONE_ROOT.", res == NO_ROOTS, true);
    }

    // Quadrature equation. Normal use case
    void QuadratureOneRootTest(void)
    {
        double a = 2;
        double b = 6;
        double c = 1;

        double x1;
        double x2;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 2, b = 6, c = 1. Quadrature equation is failed. Expected OK.", res == OK, true);
    }

};