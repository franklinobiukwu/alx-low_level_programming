#include "main.h"

/**
* factorial - Returns factorial of a given number
*
* @n: given number
*
* Return: integer
*/

int factorial(int n)
{
	int facto;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		facto = n x factorial(n - 1);

	return (facto);
}
