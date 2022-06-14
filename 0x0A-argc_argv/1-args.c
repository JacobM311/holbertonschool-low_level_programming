#include <stdio.h>

/**
 * main - function
 * @argc: number arguments passed to the program
 * @argv: string array of arguments passed to te program
 * Return: 0
 */


int main (int argc, __attribute__((unused)) char *argv[])
{
  int count = 1;

  if (argc > 1)
    {
      while (count < argc)
	{
	  count++;
	}
      printf("%d\n", count - 1);
    }

  return (0);
}
