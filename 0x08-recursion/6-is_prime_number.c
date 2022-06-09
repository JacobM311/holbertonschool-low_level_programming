#include "main.h"

/**
 * is_prime_number-returns 1 for prime number, else returns 0.
 * @n: yes
 * Return: 0 or 1.
 */


int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 1 == 0 && n % n == 0)
		return (1);
}
