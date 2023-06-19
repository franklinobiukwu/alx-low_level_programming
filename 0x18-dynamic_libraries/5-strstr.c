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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				for (k = j; needle[k] >= '\0'; k++)
				{
					if (needle[k + a] == haystack[i + a])
					{
						c++;
						a++;
					}
					if (needle[k] == '\0')
						return (&haystack[i]);
					continue;
				}

			}
		}
	}

	return ('\0');
}
