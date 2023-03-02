#include "main.h"

/**
* _strncat - concatenate tow string. Use at most n bytes from src
*
* @dest: destination
* @src: source
* @n: number of bytes
*
* Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
