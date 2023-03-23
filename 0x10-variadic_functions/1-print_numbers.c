#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
*
* @separator: string  separator between numbers
* @n: number of integers passed
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int num;

	/*initiate list*/
	va_start(numbers, n);
	/*loop through list members and print*/
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	/*end list*/
	va_end(numbers);
	printf("\n");
}
