#include "main.h"

/**
* print_rev - Prints a string in reverse, followed by a line
*
* @s: parameter
*
* Return: void
*/

void print_rev(char *s)
{
	int j, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
