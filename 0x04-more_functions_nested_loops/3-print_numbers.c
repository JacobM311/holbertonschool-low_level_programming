#include "main.h"

void print_numbers(void)

{
	char str[] = "0123456789\n";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
}

