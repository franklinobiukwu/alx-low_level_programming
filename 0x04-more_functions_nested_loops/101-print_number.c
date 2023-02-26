#include "main.h"

/**
* print_number - print integers
*
* @n: parameter
*
* Return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	} else
	{
		n = n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
