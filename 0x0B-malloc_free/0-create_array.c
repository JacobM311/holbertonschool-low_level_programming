#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array initialized with a specific character
 * @size: size of the array
 * @c: specific character
 * Return: NULL or array pointer
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int p;

	a = malloc(size * sizeof(char));	

	if (a == NULL || size == 0)
		return (NULL);

	for (p = 0; p < size; p++)
	{
		a[p] = c;
	}
return (a);
}
