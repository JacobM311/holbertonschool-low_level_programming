#include "main.h"

/**
 * _puts-puts-function
 * @str: yes
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
