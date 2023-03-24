#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - function that prints anything
*
* @format: list of types of arguement
*
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list anything;
	char *s;
	unsigned int i = 0;

	/*start list*/
	va_start(anything, format);

	/*loop through members of list*/
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			case 's':
				s = va_arg(anything, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && format[i] != '\0')
			printf(", ");
		i++;
	}
	/*end list*/
	va_end(anything);
	printf("\n");
}
