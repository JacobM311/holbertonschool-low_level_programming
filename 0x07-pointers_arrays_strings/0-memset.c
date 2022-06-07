#include "main.h"

/**
 * _memset-yes
 * @s: yes
 * @n:yes
 * @b:yes
 * Return: yes.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
