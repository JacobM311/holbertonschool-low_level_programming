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
	unsigned int p;
	char *a;
	if (size > 0)
		a = malloc(size * sizeof(char));	
	if (array != NULL)
	{
		for (p = 0; p < size; p1++)
		{
			a[p] = c;
		}
	return (a);
	}
	return (NULL);
}
