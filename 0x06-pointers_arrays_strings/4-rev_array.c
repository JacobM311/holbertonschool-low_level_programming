#include "holberton.h"

/**
 * reverse_array-yes
 * @a: yes
 * @n: yes
 * Return: 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	n--;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
