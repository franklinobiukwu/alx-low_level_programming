#include "main.h"
/**
 *	_abs - computes the value of an integer
 *
 *	Description: 'computes the value of an integer'
 *	@a: function argument
 *
 *	Return: Absolute Integer.
 */

int _abs(int a)
{

	if (a < 0)
		return (a * -1);
	else
		return (a);

}
