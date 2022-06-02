#include "main.h"

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int len1 = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	while (*str != 0)
	{
		str--;
	}
	len1 = len / 2;

	while (str[i] != '\0')
	{
		if (i >= len1)
		{
			_putchar (str[i]);
		}
	i++;
	}

}
