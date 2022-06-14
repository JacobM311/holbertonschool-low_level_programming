#include "main.h"

/**
 * _strcpy-copies string
 * @dest: yes
 * @src: yes
 * Return: yes
 */

char *_strcpy(char *dest, char *src)

{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
		return (temp);
}
