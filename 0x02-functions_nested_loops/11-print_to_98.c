#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: int of 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
		{
			printf('%d, ', n)
			n--;
		}
	if (n < 98)
		while (n < 98)
		{
			printf('%d, ', n);
			n++;
		}
	printf('98\n');
}
