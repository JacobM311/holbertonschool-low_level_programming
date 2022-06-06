#include "holberton.h"

char *_strncat(char *dest, char *src, int n)

{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
{
}

while (j < n)
{
	if (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	else
	{
		break;
	}
}


return (dest);
}
