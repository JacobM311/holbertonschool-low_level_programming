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
	unsigned int l1 = 0, l2 = 0;
	unsigned int i, j;
	char *str, *dummy;

	if (s1 != NULL)
	{
		while (s1[l1] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		while (s2[l2] != '\0')
			l2++;

		if (l2 > n)
			l2 = n;
	}

	str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (j = 0; j < l2; i++, j++)
		str[i] = s2[j];

	str[i] = '\0';

	dummy = malloc(5);
	free(dummy);

	return (str);
}
