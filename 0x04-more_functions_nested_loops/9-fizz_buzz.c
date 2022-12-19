#include <stdio.h>

/**
 * main - FizzBuzz test.
 *
 * Description: Print FizzBuzz for numbers divisible by 5 and 3.
 *
 * Return: Always 0.
 */

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	return (0);
}
