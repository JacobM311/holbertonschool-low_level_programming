#include "main.h"

/**
 * print_diagonal - jfksf
 * @n: yes
 */

void print_diagonal(int n)
{

int i, j;
i = 0;
j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				_putchar('\\');
				else
				_putchar(' ');
			}
		_putchar('\n');
		}

	}
	else if (n <= 0)
		{
		_putchar('\n');
		}
}
