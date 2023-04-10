#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the operand
 * @index: desired index
 *
 * Return: 1 on success or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setNum;

	/*return -1 if index is invalid*/
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	/*set the value of setNum*/
	setNum = ~(1 << index);
	*n = *n & setNum;

	return (1);
}
