#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
*
* @min: minmum array value
* @max: maximum array value
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
	n = (max + 1) - min;
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
