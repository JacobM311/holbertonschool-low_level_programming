#include "main.h"


int _sqrt(int i, int j)
{
	int _k = (i + j / i) / 2;

	if (i * i <= j && (i + 1) * (i + 1) > j)
		return (i);
	else
		return (_sqrt(_k, j));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}
