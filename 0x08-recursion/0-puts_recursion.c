#include "main.h"

void _puts_recursion(char *s)
{
	if (*s < 'z')
	{
		return;
	}
	_putchar('\n');
}

