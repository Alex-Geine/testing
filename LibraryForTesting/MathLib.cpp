// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use pch.h in Visual Studio 2019
#include "MathLib.h"

#include <math.h>
#include <iostream>

// ax^2 + bx + c = 0
int solve(const double a, const double b, const double c, double& x1, double& x2)
{
	x1 = 0;
	x2 = 0;

	// Linear equation
	if (a == 0)
	{
		if (b == 0)
			return NO_ROOTS;
	
		x1 = -c / b;

		return ONE_ROOT;
	}

	// Quadrature equation
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

	x1 = (- b + std::sqrt(d)) / 2. / a;
	x2 = (- b - std::sqrt(d)) / 2. / a;

	return OK;
}