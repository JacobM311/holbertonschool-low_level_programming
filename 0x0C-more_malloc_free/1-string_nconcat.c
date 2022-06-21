#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: string
 * @s2: string
 * @n: bytes of s2
 * Return: concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, x = 0, s1len = strlen(s1);
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(sizeof(char) * (s1len + n + 1));

	if (a == NULL)
		return (NULL);
	
	if (n >= strlen(s2))
		n = strlen(s2);

	while (i < (s1len + n))
	{
		if (i < s1len)
		{
			a[i] = s1[i];
		}
		else
		{
			a[i] = s2[x++];
		}
		i++;
	}
	a[i] = '\0';
	return (a);
}
