#include <stdio.h>

/**
* main - entry point
*
* description: print upper and lower case alphabet
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

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
