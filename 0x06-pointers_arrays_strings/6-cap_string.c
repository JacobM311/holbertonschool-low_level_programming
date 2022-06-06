#include "holberton.h"

/**
 * cap_string-yes
 * @c: yes
 * Return: yes
 */

char *cap_string(char *c)

{
	int j = 0;
	int i = 0;
	char a[] = " \t\n,;.!?\"(){}";

	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		for (i = 1; c[i] != '\0'; i++)
		{
			if ((c[i] >= 97) && (c[i] <= 122))
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == c[i - 1])
					{
						c[i] = c[i] - 32;
					}
				}
			}
		}
	}
return (c);
}
