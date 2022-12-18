#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: member
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i >= n; i++)
		{
			_putchar('k ');
		}
	}
	else if (n < 0)
	{
		_putchar('\n');
	}

	_putchar('\n');
}
