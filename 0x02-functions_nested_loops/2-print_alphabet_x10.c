#include "main.h"

/**
* void print_alphabet_x10(void) - Prints 10 times the alphabet in lowercase
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
