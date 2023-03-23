#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter on
* each element of an array
*
* @array: array input
* @size: size of array
* @action: function to be executed
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/*return if array or size or action is NULL*/
	if (!array || !size || !action)
		return;
	/*loop through element of array and execute action with each as input*/
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
