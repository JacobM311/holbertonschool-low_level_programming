#include "main.h"

/**
 * print_line-print line
 * @n: yes
 */

void print_line(int n)
{
int x;
x = 0;
	if (n > 0)
	{
		_putchar(n);
		while (x < n)
		{
			_putchar('_');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
		_putchar('\n');
}
