#include "main.h"

/**
 * int_strspn-yes
 * @s: yes
 * @accept: yes
 * Return: yes
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0, j;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
			j++;
		}
		i++;
	}
return (count);
}
