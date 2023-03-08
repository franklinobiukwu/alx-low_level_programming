#include "main.h"

/**
* _strstr - Locates a substring
*
* @haystack: Primary string
* @needle: Secondary string
*
* Return: Char
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int c = 0, a = 1;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				for (k = i; needle[k] >= '\0'; k++)
				{
					if (needle[k + a] == haystack[j + a])
					{
						c++;
						a++;
					}
					if (needle[k] == '\0')
						return (&haystack[j]);
					continue;
				}

			}
		}
	}

	return ('\0');
}
