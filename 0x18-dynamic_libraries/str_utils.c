#include "main.h"

/**
 * _strlen - determines the length of a string
 *
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 *_strcpy - function to copy string
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

/**
 *_strcat - function to concatenate a string
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}



/**
 * _strcmp - compares two string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if match
 * greater than 0 if s1 is greater than s2
 * less than 0 if s1 is less than s2
 */

int _strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (-1);

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
