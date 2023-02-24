#include "main.h"

/**
* print_triangle - prints a triangle followed by a line
*
* @size: parameter
*
* Return: void
*/

void print_triangle(int size)
{
	int i, j, k;

	int size_up = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < size_up; k++)
				_putchar('#');
			size_up++;
			_putchar('\n');
		}
	}
}
