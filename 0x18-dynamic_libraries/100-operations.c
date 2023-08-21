#include <stdio.h>

int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int div (int a, int b);
int mod (int a, int b);

/**
 * add - Function that adds two integer
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of two numbers
 */

int add (int a, int b)
{
	return (a + b);
}


/**
 * sub - Function that finds the difference
 * between two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference of two numbers
 */

int sub (int a, int b)
{
	return (a - b);
}


/**
 * mul - Function that finds the product of two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of two numbers
 */

int mul (int a, int b)
{
	return (a * b);
}


/**
 * div - Function that divides an integer
 * by another integer
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of division
 */

int div (int a, int b)
{
	return (a / b);
}


/**
 * mod - Function that returns the 
 * modulus of two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: The modulus of two numbers
 */

int mod (int a, int b)
{
	return (a % b);
}
