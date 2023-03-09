#include "main.h"

/**
* is_prime - Helper function to determine whether n is a prime number
*
* @n: Primary number
* @i: Counter
*
* Return: 0 or 1
*/

int is_prime(int n, int i)
{
	if (n == 1 || n < 0)
		return (0);
	if (n % i == 0 && i != n)
		return (0);
	else if (i < n)
		return(is_prime(n, ++i));
	return (1);
}

/**
* is_prime_number - returns 1 if n is a prime number, otherwise returns 0
*
* @n: Primary number
* @i: Counter
*
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	int i = 2, val;

	val = is_prime(n, i);

	return (val);
}
