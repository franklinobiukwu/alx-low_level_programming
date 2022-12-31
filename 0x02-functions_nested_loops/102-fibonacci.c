#include <stdio.h>
/**
 * main - a program that print the first 50 Fibonacci numbers
 * Description: This program prints Fibonacci numbers.
 * Return: Always 0.
 */

int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;

	printf("%d, ", a);
	printf("%d, ", b);

	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		printf("%d", c);

		a = b;
		b = c;

		if (i != 50)
			printf(", ");
	}

	printf("\n");
	return (0);
}
