#pragma once
#include <cxxtest/TestSuite.h>
#include "MathLib.h"
#include <iostream>

class MyTestSuite :public CxxTest::TestSuite
{
public:

    // Linear equation a == 0, b != 0
    void testLinearOneRoot(void)
    {
        double a = 0;
        double b = 1;
        double c = 2;

        double x1;
        double x2;

        const double x1_ref = -2;
        const double x2_ref = 0;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 0, b = 1, c = 2. Linear equation is failed. Expected ONE_ROOT.", res == ONE_ROOT, true);
        ETSM_ASSERT_EQUALS("Error! Params: a = 0, b = 1, c = 2. Linear equation is failed. Expected x1 == -2", x1 == x1_ref, true);
        ETSM_ASSERT_EQUALS("Error! Params: a = 0, b = 1, c = 2. Linear equation is failed. Expected x2 == 0", x2 == x2_ref, true);
    }

    // Linear equation a == 0, b == 0
    void testLinearNoRoots(void)
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
    void testQuadratureNoRoots(void)
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
    void testQuadratureOneRoot(void)
    {
        double a = 1;
        double b = 2;
        double c = 1;

        double x1;
        double x2;

        const double x1_ref = -1;
        const double x2_ref = 0;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 1, b = 2, c = 1. Quadrature equation is failed. Expected ONE_ROOT.", res == ONE_ROOT, true);
        ETSM_ASSERT_EQUALS("Error! Params: a = 1, b = 2, c = 1. Quadrature equation is failed. Expected x1 == -1.", x1 == x1_ref, true);
        ETSM_ASSERT_EQUALS("Error! Params: a = 1, b = 2, c = 1. Quadrature equation is failed. Expected x2 == 0.", x2 == x2_ref, true);
    }

    // Quadrature equation. Normal use case
    void testQuadratureTwoRoots(void)
    {
        double a = 1;
        double b = 5;
        double c = 2.25;

        double x1;
        double x2;

        const double x1_ref = -0.5;
        const double x2_ref = -4.5;

        int res = solve(a, b, c, x1, x2);

        ETSM_ASSERT_EQUALS("Error! Params: a = 2, b = 6, c = 1. Quadrature equation is failed. Expected OK.", res == OK, true);
        ETSM_ASSERT_EQUALS("Error! Params: a = 1, b = 2, c = 1. Quadrature equation is failed. Expected x1 == -1.", x1 == x1_ref, true);
        ETSM_ASSERT_EQUALS("Error! Params: a = 1, b = 2, c = 1. Quadrature equation is failed. Expected x2 == 0.", x2 == x2_ref, true);
    }
};