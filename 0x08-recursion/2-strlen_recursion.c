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

	int n;

	if (*s == '\0')
		return (0);

	n = 1 + _strlen_recursion(s + 1);

	return (n);
}
