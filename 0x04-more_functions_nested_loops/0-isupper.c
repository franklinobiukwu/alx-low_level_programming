#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character
 *
 * @c: member.
 *
 * Return: value.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
