#include "main.h"


/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number to get bit status of at nth bit
 * @index: bit you want to get
 * Return: value of bits or -1 if failure
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus = (n >> index) & 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	return (bitstatus);
}
