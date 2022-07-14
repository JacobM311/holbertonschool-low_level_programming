#include "main.h"

/**
 * _pow -  number times power of exponent
 * @num: number
 * @exp: exponent
 * Return: cumulative multiplication of 'num' 'exp' times
 */
int _pow(int num, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp == 0)
		return (1);
	if (exp > 0)
		return (num * _pow(num, exp - 1));

	return (num);
}
