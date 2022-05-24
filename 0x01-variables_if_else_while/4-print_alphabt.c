#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int z;

	for (z = 'a'; z <= 'z'; z++)
		if (z == 'q')
		{
			return;
		}
		else if (z == 'e')
		{
			return;
		}
	{
		putchar(z);
	}
	{
		putchar('\n');
	}
	return (0);
}
