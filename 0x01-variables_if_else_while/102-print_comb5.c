#include <stdio.h>

/**
* main - Entry point
*
* Description: 'Prints all possible combinations of two two-digit numbers'
*
* Return: Always 0
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (a == 98 && b == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar ('\n');

	return (0);
}
