#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix of integers
*
* @a: 2d array
* @size: array size
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum_2 = 0;

	for (i = 0, j = size - 1; i < size, j >= 0; i++, j--)
	{
		sum += a[i][i];
		sum_2 += a[j][j];
	}

	printf("%d, %d", sum, sum_2);	
}
