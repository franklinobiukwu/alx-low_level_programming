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
	unsigned long int setNum;

	/*return -1 on error*/
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	/*set 1 at position index*/
	setNum = 1 << index;
	/*reassign value of n with value of *n | setNum*/
	*n = *n | setNum;
	return (1);
}
