#include <stdio.h>

/**
* main - Entry point
*
* Description: finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: Always 0
*/

int main(void)
{
	int i;
	unsigned long a = 0, a1, a2, b = 1, b1, b2, c, c1, c2;

	for (i = 1; i <= 91; i++)
	{
		c = a + b;
		printf("%ld", c);
		printf(",");
		printf(" ");
		a = b;
		b = c;
	}
	a1 = a / 10000000000;
	a2 = a % 10000000000;
	b1 = b / 10000000000;
	b2 = b % 10000000000;
	for (i = 92; i <= 98; i++)
	{
		c2 = a2 + b2;
		c1 = a1 + b1;
		if (c2 > 9999999999)
		{
			c2 %= 10000000000;
			c1 += 1;
		}
		printf("%ld%ld", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		if (i != 98)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
