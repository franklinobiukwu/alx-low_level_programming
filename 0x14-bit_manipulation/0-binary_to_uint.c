#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to to string of 0 and 1 chars
 *
 * Return: converted number or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int result = 0;

	/*return 0 of b is NULL*/
	if (b == NULL)
		return (0);
	/*get length of string*/
	len = _strlen(b);
	/*convert from binary to decimal*/
	for (i = len - 1; i >= 0; i--)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result += (*b - '0') * _pow(2, i);
		b = (b + 1);
	}

	return (result);
}

/**
 * _strlen - returns the length of a string
 *
 * @str: string
 *
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; (*str) != '\0'; i++)
		str = (str + 1);

	return (i);
}


/**
 * _pow - calculate the power of a number
 * raised to a given exponent
 *
 * @num: number to be raised to power
 * @exp: the exponent to which the number should be raised
 *
 * Return: the power of a given number
 */

unsigned int _pow(int num, int exp)
{
	int i, val = 1;
	unsigned int result;

	/*return 1 if exp is 0*/
	if (exp == 0)
		return (1);
	/*convert num to positive if negative*/
	if (num < 0)
		num = -num;
	/*return num if exp is 1*/
	if (exp == 1)
		return ((unsigned int)num);
	/*multiply num exp of times*/
	for (i = 0; i < exp; i++)
		val *= num;
	/**
	 * convert num to unsigned int by
	 * casting num to unsigned int
	 */
	result = (unsigned int)val;

	return (result);
}
