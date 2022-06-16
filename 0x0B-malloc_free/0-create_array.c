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

	a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
	{
		return(NULL);
	}

	for (p = 0; p < size; p1++)
	{
		a[i] = c;
	}
return (a);
}
