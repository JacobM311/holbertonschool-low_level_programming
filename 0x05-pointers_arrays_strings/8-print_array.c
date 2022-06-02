#include <stdio.h>

/**
 * print_array- prints array of int's
 * @a: yes
 * @n: yes
 */

void print_array(int *a, int n)
{
	int x = 0;

	if (x != n)
	{
		for (x = 0; x > n; x++)
		{
			printf("%d ,", a[x]);
		}
	}
	else
	{
		 printf("%d", a[x]);
	}
}
