#include "main.h"

/**
 * _strchr-yes
 * @s: yes
 * @c: yes
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		if (*s == c)
		{
			return (s);
		
		}
	}
	return ('\0'i);
}
