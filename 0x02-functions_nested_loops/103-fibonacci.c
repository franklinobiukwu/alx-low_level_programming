#include <stdio.h>

/**
* main - Entry point
*
* Description: A program that finds and prints the sum of the even-valued terms
*
* Return: On success 0
*/

int main(void)
{
	long int sum, a, b, c;

	a = 0;
	b = 1;

	do {
		c = a + b;

		if (c % 2 == 0)
		{
			sum += c;
		}

		b = c;
		a = b;

	} while (c < 4000000);

	printf("%ld", sum);
	printf("\n");

	return (0);
}
