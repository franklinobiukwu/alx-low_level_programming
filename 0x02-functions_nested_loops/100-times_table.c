#include "main.h"
/**
 * print_times_table - print n times table.
 * @n: arguement.
 * Return: n times table.
 */

void print_times_table(int n)
{
	int i, j, result, h, t, u;

	if (n >= 0 &&  n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				h = ('0' + (result / 100));
				if (result > 99 && result < 999)
					t = ('0' + ((result / 10) % 10));
				else
					t = ('0' + (result / 10));
				u = ('0' + (result % 10));

				if (result == 0 && j == 0)
					_putchar ('0');
				else
				{
					if (result <= 9)
					{
						_putchar (' ');
						_putchar (' ');
					}
					else if (result >=10 )
						_putchar (h);
					_putchar (t);
					_putchar (u);
				}

				if (result != (n * n) && j != n)
				{
					_putchar (',');
					_putchar (' ');
				}
			}
			_putchar ('\n');
		}
	}
}
