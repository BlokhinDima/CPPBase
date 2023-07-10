#include "math.h"

int math::add(int a, int b)
{
	return a + b;
}

int math::subtract(int a, int b)
{
	return a - b;
}

long long math::multiply(int a, int b)
{

	return static_cast<long long>(a) * b;
}

double math::divide(double a, double b)
{
	return a / b;
}

long long math::pow(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}

	if (b == 1)
	{
		return a;
	}

	long long result = a;
	for (int i = 1; i < b; ++i)
	{
		result = result * a;
	}
	return result;
}
