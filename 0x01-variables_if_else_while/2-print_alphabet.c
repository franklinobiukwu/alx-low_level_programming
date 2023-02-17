#include <stdio.h>

/**
 * main - entry point
 *
 * description: print a - z
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
