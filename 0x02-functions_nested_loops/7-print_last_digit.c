#include "main.h"
/**
 * print_last_digit - isdf
 * @j: variable
 * Return: last digit
 */
int print_last_digit(int j)
{
j = j % 10;
if (j > 0)
	j = j * -1;
_putchar(j + 48);
return (j);
}

