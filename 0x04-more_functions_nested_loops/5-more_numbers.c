#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int j;
	int size;
	int array[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 48, 49, 50, 51, 52};

	j = 0;
	size = sizeof(array) / sizeof(array[0]);


	while (j < 10)
	{

		for (i = 0; i < size; i++) /*Loop 9 times*/
		{
			if (i > 9)
				_putchar(array[1]);
			_putchar(array[i]);
		}

		j++;
		_putchar('\n');
	}

}
