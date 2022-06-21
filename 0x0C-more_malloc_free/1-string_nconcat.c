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
	unsigned int i, j, s1Len = strlen(s1);
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	ptr = malloc(sizeof(char) * (s1Len + n + 1));

	if (!ptr)
		return (NULL);

	for (i = 0, j = 0; i < (s1Len + n); i++)
	{
		if (n >= strlen(s2))
			n = strlen(s2);

		if (i < s1Len)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[j++];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
