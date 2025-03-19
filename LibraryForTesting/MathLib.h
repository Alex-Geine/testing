// MathLibrary.h — содержит объявления математических функций
#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif



extern "C" MATHLIBRARY_API int solve(const double a, const double b, const double c, double& x1, double& x2);