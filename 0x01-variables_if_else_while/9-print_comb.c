#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '8'; z++)
	{
		putchar(z);
		putchar(',');
		putchar(' ');
	}	
	{
		putchar('9');
	}

	return (0);
}
