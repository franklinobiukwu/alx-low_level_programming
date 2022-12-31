#include <stdio.h>
/**
 * main - a program that print the first 50 Fibonacci numbers
 * Description: This program prints Fibonacci numbers.
 * Return: Always 0.
 */

int main(void)
{
	int i;


	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		printf("%lu", c);

		a = b;
		b = c;

		if (i != 48)
			printf(", ");
	}

	printf("\n");
	return (0);
}
