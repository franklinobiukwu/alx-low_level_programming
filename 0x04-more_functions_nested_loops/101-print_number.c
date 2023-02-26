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
	unsigned int nn;

	if (n < 0)
	{
		nn = -n;
		_putchar('-');
	} else
	{
		nn = n;
	}

	if (nn / 10)
	{
		print_number(nn / 10);
	}

	_putchar((nn % 10) + '0');
}
