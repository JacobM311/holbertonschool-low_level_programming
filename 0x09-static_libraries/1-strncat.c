#include "main.h"

/**
 * _strncat-yes
 * @dest: yes
 * @src: yes
 * @n: yes
 * Return: yes
 */

char *_strncat(char *dest, char *src, int n)

{
int i = 0;
int j = 0;

while (dest[i])
{
	i++;
}


while (j < n)
{
	if (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	else
	{
		break;
	}
}

return (dest);

}
