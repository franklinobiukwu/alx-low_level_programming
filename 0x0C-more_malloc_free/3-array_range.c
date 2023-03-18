#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
*
* @min:
* @max:
*
* Return: integer
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, j, k, n;

	/*return NULL if min is greater than max*/
	if (min > max)
		return (NULL);
	/*count integer values from min to max*/
	for (i = min, n = 1; i <= max; i++, n++)
		continue;
	/*allocate memory using malloc*/
	arr = malloc(n * sizeof(int));
	/*return NULL if malloc fails*/
	if (arr == NULL)
		return (NULL);
	/*insert integers from min to max into memory*/
	for (j = min, k = 0; j <= max; j++, k++)
		arr[k] = j;
	return (arr);
}
