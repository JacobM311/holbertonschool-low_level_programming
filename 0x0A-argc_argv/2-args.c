#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: number arguments passed to the program
 * @argv: string array of arguments passed to te program
 * Return: 0
 */


int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
