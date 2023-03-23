#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all it's parameters
*
* @n: first arguement
*
* Return: integer
*/

int sum_them_all(const unsigned int n, ...)
{
	/*define variadic list*/
	va_list numbers;
	
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	/*initiate list*/
	va_start(numbers, n);i

	/*loop through members of the list and sum each*/
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
