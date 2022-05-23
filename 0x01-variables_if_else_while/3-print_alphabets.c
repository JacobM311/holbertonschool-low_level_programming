#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = 'a'; z <= 'z'; z++)
	{
		putchar(z);
	}
	for (z = 'A'; z <= 'Z'; z++)
	{
		putchar(z);
	}
	{
		putchar('\n');
	}
	return (0);
}
