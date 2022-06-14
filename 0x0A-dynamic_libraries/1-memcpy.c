#include "main.h"

/**
 * _memcpy-yes
 * @dest: yes
 * @src: yes
 * @n: yes
 * Return: yes
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
