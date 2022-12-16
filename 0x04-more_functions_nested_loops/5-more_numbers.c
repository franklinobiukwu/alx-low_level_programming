#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int r, n, c;

	for (r = '0'; r <= '9'; r++)
	{
		for (n = '0'; n <= '1'; n++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (n == '0' || n == '1')
					_putchar(c);
				if (n == '1')
				{
					if (c < 4)
						continue;
					_putchar(c);
				}
			}
		}
	_putchar('\n');
	}

}
