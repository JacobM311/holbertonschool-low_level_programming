#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
int x;
	for  (x = 1; x <= 100; x++)
	{
		if (x == 100)
		{
			printf("Buzz");
		}
		else if (x % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
return (0);
}
