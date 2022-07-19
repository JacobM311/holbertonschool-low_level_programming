#include "main.h"

/**
 * is_prime_number-returns 1 for prime number, else returns 0.
 * @n: yes
 * Return: 0 or 1.
 */

int get_prime(int num, int i)
{
       if(num % i == 0)
         return (1);
       else
         get_prime(num, i - 1);
}

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	return (get_prime(1, n));
}
