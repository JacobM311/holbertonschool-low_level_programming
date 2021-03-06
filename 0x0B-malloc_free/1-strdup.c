#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strdup - returns pointer cotaining copy of string
 * @str: string being copied
 * Return: pointer to string or NULL
 */

char *_strdup(char *str)
{
	int str_size;
	static char *dup;
	char *temp;

	if (str == 0)
	return (NULL);

	/* Allocate memory for duplicate */
	str_size = _strlen(str);
	dup = malloc(sizeof(char) * str_size + 1);
	if (dup == 0)
		return (NULL);

	/* Copy string */
	temp = dup;
	while (*str)
	{
		*temp = *str;
		temp++;
		str++;
	}
	*dup_offset = '\0';

return (dup);
}
