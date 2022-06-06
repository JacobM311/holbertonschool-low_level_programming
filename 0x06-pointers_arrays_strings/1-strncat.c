#include "holberton.h"

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
		dest[i + j] = src[j];
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
