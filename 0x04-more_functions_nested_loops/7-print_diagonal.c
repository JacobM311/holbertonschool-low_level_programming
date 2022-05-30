#include "main.h"

void print_diagonal(int n)
{
int x, i, j;
i = 0;
j = 0;
x = '\\';
if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			_putchar(x);
			else
			_putchar(' ');
		}
	_putchar('\n');
	}
}
if (n <= 0)
	{
		_putchar('\n');
	}
}
