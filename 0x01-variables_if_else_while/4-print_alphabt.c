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
	{
	if ( z != 'e' && z != 'q' )
	{
	putchar(z);

	putchar('\n');
	}
	}
	return (0);
}
