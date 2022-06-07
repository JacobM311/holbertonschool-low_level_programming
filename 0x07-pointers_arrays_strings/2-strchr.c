#include "main.h"

/**
 * _strchr-yes
 * @s: yes
 * @c: yes
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		i++;
	}
	return ('\0');
}
