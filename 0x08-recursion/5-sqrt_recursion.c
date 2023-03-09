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
	int i = 0, val;

	val = _sqrt(n, i);

	return (val);
}

/**
* _sqrt - finds and returns the natural square root of an number
*
* @n: number
* @i: counter, test case
*
* Return: integer
*/

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i < n)
		return (_sqrt(n, ++i));
	return (-1);
}
