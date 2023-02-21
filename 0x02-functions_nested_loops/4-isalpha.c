#include "main.h"

/**
* _isalpha - Checks for alphabetic characters
*
* @c: first value
*
* Return: On success  1
*/

int _isalpha(int c)
{
	if ((c == 'a' && c <= 'z') || (c == 'A' and c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
