#include "main.h"

/**
* _abs - Computes the absolute value of an integer
*
* @n: arguement
*
* Return: On success integer
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
