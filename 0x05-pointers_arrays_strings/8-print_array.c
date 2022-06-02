#include <stdio.h>

/**
 * print_array- prints array of int's
 * @a: yes
 * @n: yes
 */

void print_array(int *a, int n)
{
	int x = 0;
if (n > 0)
{
	for (x = 0; x < n - 1; x++)
	{
		printf("%d ,", a[x]);
	}
	for (x = n - 1; x < n; x++)
	{
		printf("%d\n", a[x]);
	}

}
else
{
	printf("\n");
}
}
