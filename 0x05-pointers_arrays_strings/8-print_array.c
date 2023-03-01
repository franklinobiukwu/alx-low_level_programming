#include <stdio.h>
#include "main.h"

/**
* print_array - Print n elements of an array of integers,followed by a new line
*
* @a: first parameter
* @n: second parameter
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}

	}

	printf("\n");
}
