#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
*
* @array: array of integers
* @size: size of array
* @cmp: pointer to fuction
*
* Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	/*variable to hold index*/
	int index, h;

	/*return 0 if array, size, or cmp is NULL*/
	if (!array || !size || !cmp)
		return (0);
	if (size <= 0)
		return (-1);
	/*loop through elements of array and set each element as input to cmp*/
	for (index = 0; index < size; index++)
	{
		h = (*cmp)(array[index]);
		/*return index if function returns true*/
		if (h == 1)
		{
			return (index);
		}
	}

	return (-1);
}
