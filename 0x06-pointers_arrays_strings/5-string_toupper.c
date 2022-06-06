#include "holberton.h"

/**
 * string_toupper-yes
 * @c: yes
 * Return: yes
 */

char *string_toupper(char *c)

{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] <= 'z' && c[i] >= 'a')
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
