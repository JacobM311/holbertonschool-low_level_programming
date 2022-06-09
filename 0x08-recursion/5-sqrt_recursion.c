#include "main.h"


int _sqrt(int k, int n)
{
	int next_k = (k + n/k) / 2;
	if (k*k <= n && (k+1)*(k+1) > n)
		return k;
	else
		return (_sqrt(next_k, n));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
        return (_sqrt(1, n));
}
