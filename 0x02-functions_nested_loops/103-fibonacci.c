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
	long int even_sum, sum, a, b, c;

	a = 0;
	b = 1;
	even_sum = 0;

	do {
		c = a + b;

		if ((c % 2) == 0)
		{
			even_sum += c;
		}

		sum += c;

		a = b;
		b = c;

	} while (c <= 4000000);

	printf("%lu", even_sum);
	printf("\n");

	return (0);
}
