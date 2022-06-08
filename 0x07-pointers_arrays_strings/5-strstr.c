#include "main.h"
#include<stddef.h>

char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;

	if (*b == 0) 
	{
		return (haystack);
	}
	for ( ; *haystack != 0; haystack++) 
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1) 
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++) 
			{
				break;
			}
		}
		b = needle;
	}
return (NULL);
}
