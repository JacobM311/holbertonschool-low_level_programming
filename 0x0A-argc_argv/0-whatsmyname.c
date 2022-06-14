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

	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
