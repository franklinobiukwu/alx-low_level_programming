#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: void
*/

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k ==  0 && j == 0)
			{
				_putchar('0');
			}
			else if (k == 0 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0');
			}
			else if (k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k > 9 && k <= 99)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}

			if (k != 81 && j != 9)
			{
				_putchar(',');
			}
		}

		_putchar('\n');
	}
}
