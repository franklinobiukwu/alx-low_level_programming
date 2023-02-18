#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints the alphabet in lowercase, followed by a new line'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	 putchar ('\n');

	return (0);
}
