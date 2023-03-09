#include "main.h"

/**
* _strlen_recursion - Print length of string
*
* @s: String
*
* Return: integer
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	n++;
	_strlen_recursion(s + 1);

	return (n);
}
