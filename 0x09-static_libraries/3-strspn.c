#include "main.h"

/**
* _strspn - gets the length of a prefix substring
*
* @s: string
* @accept: second string
*
* Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				count++;
		}
	}

	return (count);
}
