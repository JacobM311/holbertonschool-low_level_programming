#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - runs malloc
 * @b: int being allocated
 * Return: allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
