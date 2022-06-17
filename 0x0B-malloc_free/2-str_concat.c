#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: string
 * @s2: string
 * Return: concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (a == NULL)
		return (NULL);
	while (*s1)
	{
		a[i] = *s1;
		i++;
		s1++;
	}

	 while (*s2)
        {
                a[i] = *s2;
                i++;
                s2++;
        }
return (a);
}
