#include "main.h"

/**
* _isdigit - Checks for digit between 0 and 9
*
* @c: parameter
*
* Returns: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
