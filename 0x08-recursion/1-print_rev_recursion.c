#include "main.h"

/**
* _print_rev_recursion - Print a string in revers
*
* @s: sting
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s++);
	_putchar(*s);
}
