#include "main.h"
/**
 * print_triangle-prints a triangle
 * @size: yes
 */

void print_triangle(int size)

{

int row, col1, col2, noofcol;
noofcol = size - 1;

if (size > 0)
{
	for (row = 1; row <= size; row++)
	{
		for (col1 = 1; col1 <= noofcol; col1++)
		{
			_putchar(' ');
		}
		noofcol--;
			for (col2 = 1; col2 <= row; col2++)
			{
				_putchar('#');
			}
		_putchar('\n');
	}
}
if (size <= 0)
{
	_putchar('\n');
}
}
