#include "main.h"

/**
* puts2 - prints every other charater of a string
*
* @str: parameter
*
* Return: void
*/

void puts2(char *str)
{
	int i, strlen, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	strlen = i - 1;

	for (j = 0; j <= strlen; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
