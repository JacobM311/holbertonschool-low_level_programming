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
		while (x < n)
		{
			_putchar('_');
			x++;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
		_putchar('\n');
}
