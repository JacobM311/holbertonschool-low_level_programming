#include "main.h"

/**
 * print_diagonal - jfksf
 * @n: yes
 */

void print_diagonal (int n)
{

int j;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
				while (--j)
				{
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
				}
		}

	}
}
