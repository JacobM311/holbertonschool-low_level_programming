#include <stdio.h>

/**
 * main - function
 * @argc: number arguments passed to the program
 * @argv: string array of arguments passed to te program
 * Return: 0
 */


int main(int argc, __attribute__((unused)) char *argv[])
{

if (argc > 0)
{
	printf("%d\n", argc - 1);
}
return (0);
}
