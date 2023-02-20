#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints all possible different combinations of three digits'
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == '7' && y == '8' && z == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar ('\n');

	return (0);
}
