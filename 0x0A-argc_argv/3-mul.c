#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: number arguments passed to the program
 * @argv: string array of arguments passed to the program
 * Return: 0
 */

int main(int argc, char  *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
