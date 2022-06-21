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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0;
	unsigned int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(sizeof(char) * (strlen(s1) + sizeof(n) + 1));

	if (a == NULL)
		return (NULL);
	while (*s1)
	{
		a[i] = *s1;
		i++;
		s1++;
	}

	while (x <= n) 
	{
		a[x] = s2[x];
		x++;
	}
return (a);
}
