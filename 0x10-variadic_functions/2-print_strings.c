#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
*
* @separator: string separator
* @n: number of strings passed
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *s;
	unsigned int i;

	/*start list*/
	va_start(strings, n);
	/*loop through members of list and print each*/
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		/*print 'nil' if string is NULL*/
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	/*end list*/
	va_end(strings);

	printf("\n");
}
