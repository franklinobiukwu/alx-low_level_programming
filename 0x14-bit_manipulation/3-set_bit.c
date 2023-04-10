#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 *
 * @n: number
 * @index: index to set value to 1
 *
 * Return: 1 on success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bin;
	int num = *n;
	unsigned long int dec;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	bin = _pow(10, (index - 1));
	dec = _convertbtodec(bin);

	*n = num | dec;

	return (1);
}



/**
 * _convertbtodec - convert binary number to decimal
 *
 * @bin: binary number
 *
 * Return: binary conversion
 */

int _convertbtodec(int bin)
{
	int val = 0;
	int power = 1;

	while (bin > 0)
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



#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
