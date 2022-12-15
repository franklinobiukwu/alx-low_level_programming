#include "main.h"
/**
 *	_islower - check for lowercase character
 *
 *	@c: member
 *
 *	Description: 'check for lower character'
 *
 *	Return: 1
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
