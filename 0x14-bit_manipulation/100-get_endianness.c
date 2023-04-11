#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */

int get_endianness(void)
{
	int num;
	char c;

	num = 1;
	/*cast num to caracter*/
	c = (char)num;
	/*returns 0 if Big-endian or 1 if little endian*/
	return (c);
}
