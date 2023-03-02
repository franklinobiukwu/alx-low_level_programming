#include "main.h"

/**
* _strncpy - copies a string
*
* @dest: first member
* @src: second member
* @n: third member
*
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\n';

	return (dest);
}
