#include "holberton.h"

/**
 * leet-yes
 * @c: yes
 * Return: yes
 */

char *leet(char *c)
{
	char duggystyle[] = "aAeEoOtTlL4433007711";
	int i = 0;
	int j = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == duggystyle[j])
			{
				c[i] = duggystyle[j + 10];
			}
		}
	}
return (c);
}
