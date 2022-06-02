#include "main.h"

void rev_string(char *s)
{
	int b;
	int c = 0;
	int e;

	while (s[c] != '\0')
	{
		c++;
	}
	for (b = 0; b < c / 2; b++)
	{
		e = s[b];
		s[b] = s[c - b -1]
		s[c - b -1] = e;
	}
}
