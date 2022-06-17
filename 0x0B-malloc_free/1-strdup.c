#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer cotaining copy of string
 * @str: string being copied
 * Return: pointer to string or NULL
 */

int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                s++;
                len++;
        }
        return (len);
}

char *_strdup(char *str)
{
	int str_size;
	static char *dup;
	char *dup_offset;

	if( str == 0)
        return(NULL);
	
	/* Allocate memory for duplicate */
	str_size = _strlen(str);
	dup = (char *)malloc(sizeof(char)*str_size+1);
	if (dup == 0)
		return (NULL);

	    /* Copy string */
	dup_offset = dup;
	while(*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

return(dup);
}
