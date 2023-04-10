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

/**
 * _convertdtobase - convert from base 10 to desired base
 *
 * @num: base 10 number to be converted
 * @base: base to be converted to
 *
 * Return: result of conversion
 */

int _convertdtobase(int num, int base)
{
	int count = 0;
	char digit[] = "0123456789ABCDEF";

	if (num >= base)
	{
		count = _convertdtobase((num / base), base);
		num = _putchar(num % base);
	}

	count = _putchar(digit[num]);

	return (count);
}

/**
 * _convertbtodec - convert binary number to decimal
 *
 * @bin: binary number
 * @count: base 10
 *
 * Return: binary conversion
 */

int _convertbtodec(int bin)
{
	int val = 0;
	int power = 1;

	while (bin > 9)
	{
		int digit = bin % 10;
		/*validate if character is a number*/
		if (digit != 0 && digit != 1)
			return (-1);
		val += digit * power;
		power *= 2;
		bin /= 10;
	}

	return (val);
}
