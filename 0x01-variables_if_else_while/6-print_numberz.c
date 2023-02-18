#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print all single digit number of base 10 using putchar'
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
