#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all ints passed
 * @n: variable to be passed int's
 * Return: sum of all int's.
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list valist;

	va_start(valist, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
