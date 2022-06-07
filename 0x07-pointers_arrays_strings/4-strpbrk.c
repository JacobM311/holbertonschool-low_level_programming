#include "main.h"

/**
 * _strpbrk-yes
 * @s: yes
 * @accept: yes
 * Return: yes
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
return ('\0');
}

