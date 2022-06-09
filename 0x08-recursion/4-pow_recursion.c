#include "main.h"

/**
 * _pow_recursion-returns value raised to a power
 * @x: yes
 * @y: yes
 * Return: value raised to a power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	return (x);
}
