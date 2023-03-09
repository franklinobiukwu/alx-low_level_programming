#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a line
*
* @s: Pointer to string
*
* Return: void
*/

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	_putchar('\n');
}
