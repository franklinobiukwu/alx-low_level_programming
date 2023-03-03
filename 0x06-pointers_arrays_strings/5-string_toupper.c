#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase
*
* @n: parameter
*
* Return: Character
*/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}

	return (n);
}
