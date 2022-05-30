#include "main.h"

void print_most_numbers(void)

{
	char str[] = "01356789\n";
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
}
