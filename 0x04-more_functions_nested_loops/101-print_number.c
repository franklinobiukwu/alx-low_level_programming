#include "main.h"

/**
* print_number - print an integer
*
* @n: parameter
*
* Return: 0
*/

void print_number(int n)
{
	int x = 0;
	int i, digit;

	while (!(n < 10))
	{
		n /= 10;
		x++;
	}

	for (i = 0; i <= x; i++)
	{
		digit = n/(10 * x);
		_putchar(digit + '0');
		x--;
	}
}
