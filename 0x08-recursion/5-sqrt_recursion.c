#include "main.h"


int _sqrt(int i, int n)
{
	int _k = (i + n / i) / 2;

	if (i * i <= n && (i + 1) * (i + 1) > n)
		return (i);
	else
		return (_sqrt(_k, n));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}
