#include "main.h"

/**
 * flip_bits - returns the number of bits to be
 * flipped to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int o;

	o = n ^ m;
	while (o)
	{
		count = count + (o & 1);
		o =  o >> 1;
	}

	return (count);
}
