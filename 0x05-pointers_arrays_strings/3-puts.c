#include "main.h"

/**
* _puts - Prints a string, followed by a new line
*
* @str: parameter
*
* Return: void
*/

void _puts(char *str)
{
	int v, i = 0;

	while(str[i] != '\0')
	{
		v = str[i];
		_putchar(v);
		i++;
	}

	_putchar('\n');
}
