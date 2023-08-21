#include "main.h"

/**
 * _puts - write a string without a trailing new line to standard output
 *
 * @str: string to be written to stdout
 *
 * Return: 0 on success
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return;
}
