#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"
char *_strdup(char *str)
{
	int str_size;
	static char *dup;
	char *dup_offset;

	/* Allocate memory for duplicate */
	str_size = _strlen(str);
	dup = (char *)malloc(sizeof(char)*str_size+1);
	if( str == NULL)
	return(NULL);

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
