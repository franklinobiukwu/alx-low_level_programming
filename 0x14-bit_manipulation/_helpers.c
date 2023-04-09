#include "main.h"

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
