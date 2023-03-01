#include "main.h"

/**
* puts_half - Prints half od a string, followed by a nwe line
*
* @str: parameter
*
* Return: void
*/

void puts_half(char *str)
{
	int i, strlen, halfstr, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	strlen = i - 1;

	if (i % 2 == 0)
	{
		halfstr = i / 2;
		for (j = halfstr; j <= strlen; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		halfstr = (i - 1) / 2;
		for (j = halfstr; j <= strlen; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
