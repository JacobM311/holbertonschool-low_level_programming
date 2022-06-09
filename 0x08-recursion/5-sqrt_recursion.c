#include "main.h"

/**
 * _sqrt-gets square root of number
 * @i: yes
 * @j: yes
 *
 * Return: square root.
 */

int _sqrt(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(i + 1, j));
	}
}

/**
 * _sqrt_recursion-square root
 * @n: yes
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}
