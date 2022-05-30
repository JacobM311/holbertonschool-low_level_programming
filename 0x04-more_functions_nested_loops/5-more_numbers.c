#include "main.h"

void more_numbers(void)
{
	char str[] = "01234567891011121314\n";
	int i, x;
	x = 0;
	i = 0;

	if (x < 10)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	x++;
	}
}
