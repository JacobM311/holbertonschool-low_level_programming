#include "main.h"

/**
 * _strlen-length of string
 * @s: yes
 * Return: yes
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
