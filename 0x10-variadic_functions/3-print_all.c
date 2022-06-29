#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints char, string, int, or float
 * @format: what type to print
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int flag;
	char *string;

	va_list var;

	va_start(var, format);

		while (format && format[i])
		{
			flag = 0;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(var, int));
					flag = 1;
					break;
				case 'i':
					printf("%d", va_arg(var, int));
					flag = 1;
					break;
				case 'f':
					printf("%f", va_arg(var, double));
					flag = 1;
					break;
				case 's':
					string = va_arg(var, char *);
					if (string == NULL)
						string = "(nil)";
					printf("%s", string);
					flag = 1;
					break;
			}
			if (flag == 1 && format[i + 1])
				printf(", ");
			i++;
		}
	va_end(var);
	printf("\n");
}
