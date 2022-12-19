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

	for (l = 0; l < n; l++)
		_putchar('_');
	_putchar('\n');
}
