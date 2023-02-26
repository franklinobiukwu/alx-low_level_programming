#include <stdio.h>

/**
* main - Entry point
*
* Description: find and print the largest prime factor of a number
*
* Return: 0
*/

int main(void)
{
	long n = 612852475143;
	long factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%ld", factor);

	printf("\n");

	return (0);
}
