#include "main.h"

/**
* _strchr - Function that locates character in a string
*
* @s: string
* @c: character to be located
*
* Return: pointer to character or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}

	}
		

	return ('\0');
}
