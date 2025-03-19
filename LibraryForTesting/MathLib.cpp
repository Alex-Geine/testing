// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use pch.h in Visual Studio 2019
#include "MathLib.h"

#include <math.h>
#include <iostream>

#define OK       0
#define NO_ROOTS 1
#define ONE_ROOT 2

// ax^2 + bx + c = 0
int solve(const double a, const double b, const double c, double& x1, double& x2)
{
	double d = b * b - 4 * a * c;

	if (d < 0)
	{
		return NO_ROOTS;
	}
	else if (d == 0)
	{
		x1 = -b / 2 / a;
		return ONE_ROOT;
	}

	x1 = -b + std::sqrt(d) / 2 / a;
	x2 = -b + std::sqrt(d) / 2 / a;

	return OK;
}