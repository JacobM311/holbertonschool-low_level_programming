#include "main.h"

/**
 * print_rev-prints string in reverse
 * @s: yes
 */

void print_rev(char *s, char *b)
{
	if (*s != '\0')
	{
		print_rev(s + 1, b);
		_putchar(*s);
		if (s == b)
		{
			_putchar('\n');
		}
	}
	
}
