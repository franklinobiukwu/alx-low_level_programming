#include "main.h"

/**
* _strlen - return string length
*
* @s: String
*
* Return: int
*/

int _strlen(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = 1 + _strlen(s + 1);
	}
	else
		return (0);

	return (count);

}

/**
* _palindrome - Returns 1 if string is palindrome
*
* @s: String
* @count: String count
*
* Return: 0 or 1
*/

int _palindrome(char *s, int count)
{
	int strlength, val;

	strlength = _strlen(s);

	if (*s != *(s + (strlength - 1 - count)))
		return (0);
	else if (*s == *(s + (strlength - 1 - count)))
	{
		if ((strlength - 1 - count) < 0 || (strlength - 1 - count) == 1)
			return (1);
		val = _palindrome(s + 1, count + 1);
		if (val == 0)
			return (0);
	}
	return (1);
}

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
*
* @s: String
*
* Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int val;

	val = _palindrome(s, 0);

	return (val);
}
