#include "main.h"

/**
 * @s: yes
 * _print_rev_recursion-yes
 * Return: yes
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

