#include "main.h"

/**
* print_number - function that prints an integer
*
* @n: Parameter
*
* Return: Void
*/

void print_number(int n)
{
	unsigned int nn;

	if (n < 0)
	{
		_putchar('-');
		nn = n * -1;
	} else
	{
		nn = n;
	}
	if (nn / 10)
		print_number(nn / 10);
	_putchar((nn % 10) + '0');
}
