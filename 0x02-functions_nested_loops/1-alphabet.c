#include "main.h"
/**
 *	print_alphabet - print lower case letter a - z
 *
 *	Description: ''
 *
 *	Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
