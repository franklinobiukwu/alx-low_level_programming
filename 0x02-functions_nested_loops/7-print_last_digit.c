#include "main.h"
/**
 *	print_last_digit - find it
 *
 *	@a: function argument.
 *
 *	Return: Always integer;
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
		n *= -1;
	_putchar (n + '0');

	return (n);
}
