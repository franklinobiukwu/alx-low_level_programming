#include "main.h"

/**
* cap_string - capitalizes all words of a
* string having special characters as separator
*
* @n: parameter
*
* Return: Character
*/

char *cap_string(char *n)
{
	int i, j;

	char spec[] = ",;.!?(){}\n\t\" ";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; spec[j] != '\0'; j++)
		{
			if (n[i] == spec[j] && (n[i + 1] >= 'a' && n[i + 1] <= 'z'))
				n[i + 1] -= 32;
		}
	}

	return (n);

}
