#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string
 * @s2: string
 * @n: bytes of s2
 * Return: concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, x = 0, s1len = strlen(s1), s2len = strlen(s2), len;
	char *a;
	char *junk;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= s2len)
		len = s1len = s2len;
	else
		len = s1len + n;

	a = malloc(sizeof(char) * (len + 1));

	junk = malloc(5);
	free(junk);

	if (a == NULL)
		return (NULL);

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
