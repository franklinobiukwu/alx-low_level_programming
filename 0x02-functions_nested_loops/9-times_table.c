#include "main.h"
/**
 *	times_table - prints the 9 times table
 *
 *	return: void
 */

void times_table(void)
{
	int i, j, result, t, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			t = ('0' + (result / 10));
			u = ('0' + (result % 10));

			if (j != 0)
			{
				if (t == '0' && j != 0)
					_putchar (' ');
				else
					_putchar (t);
			}
			_putchar (u);

			if (j != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}

		_putchar ('\n');
	}

}
