#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
*
* @n: number
*
* Return: integer
*/

int _sqrt_recursion(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i * i == n)
			return (i);
	}

	return (-1);
}
