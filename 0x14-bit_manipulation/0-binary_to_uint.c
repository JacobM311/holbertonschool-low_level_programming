#include "main.h"
#include "_pow.c"

/**
 * binary_to_uint - converts a binary number to a decimal
 * @b: ponter to a string containing the binary number to convert
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 0, decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (((b[i]) != '0') && ((b[i]) != '1') && ((b[i]) != '\0'))
			return (0);
	}

	i = i - 1;

	while (b[j] != '\0')
	{
		if (b[i] == '1')
		{
				decimal = decimal + _pow(2, j);
		}
		j++;
		i--;
	}
	return (decimal);
}
