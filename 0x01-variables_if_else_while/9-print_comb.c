#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '10'; z++)
	{
		putchar(z);
	}
	if (z == 9)
	{
		putchar(z);
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}

	return (0);
}
