#include "main.h"

/**
 * _strcmp-yes
 * @s1: yes
 * @s2: yes
 * Return: yes
 */

int _strcmp(char *s1, char *s2)

{
int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
	}
return (s1[i] - s2[i]);

}
