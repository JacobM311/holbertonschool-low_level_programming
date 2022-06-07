#include "main.h"

/**
 * _strchr-yes
 * @s: yes
 * @c: yes
 * Return: yes
 */

char *_strchr(char *s, char c)
{

	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
