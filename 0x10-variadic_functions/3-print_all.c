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
	char *s, *separator;
	unsigned int i = 0;

	if (format == NULL)
		return;

	/*start list*/
	va_start(anything, format);

	separator = "";
	/*loop through members of list*/
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(anything, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(anything, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(anything, double));
				break;
			case 's':
				s = va_arg(anything, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	/*end list*/
	va_end(anything);

}
