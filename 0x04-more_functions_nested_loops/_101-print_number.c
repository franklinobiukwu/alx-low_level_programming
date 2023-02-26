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
	int y, i, j, p, nn, digit;

	if (n < 0)
	{
		nn = -n;
		n = nn;
		_putchar('-');
	}
	else
	{
		nn = n;
		n = nn;
	}
	p = 1;
	while (!(nn < 10))
	{
		nn /= 10;
		x++;
	}
	y = x;
	for (i = 0; i <= y; i++)
	{
		for (j = 0; j < x; j++)
		{
			p *= 10;
		}
		digit = n / p;
		if (digit >= 10)
			digit %= 10;
		_putchar(digit + '0');
		x--;
		p = 1;
	}
	_putchar('\n');
}
