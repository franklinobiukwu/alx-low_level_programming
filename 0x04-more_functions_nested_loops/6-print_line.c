#include "main.h"

/**
 * print_line - draw a straight line.
 *
 * @n: member.
 *
 * Return: void.
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			/*if (n == 0)
			{
				_putchar('\n');
				continue;
			}*/
			_putchar('_');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
