#include "main.h"

/**
 * more_numbers-more numbers
 *
 */

void more_numbers(void)
{
	char str[] = "01234567891011121314\n";
	int i, x;

	x = 0;
	i = 0;

	while (x < 10)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		while (i > 0)
		{
			i--;
		}
	x++;
	}
}
