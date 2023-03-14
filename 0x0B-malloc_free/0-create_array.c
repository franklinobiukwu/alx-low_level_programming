#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes
* it with a specific char
*
* @size: size of memory
* @c: value of memory
*
* Return: pointer to character
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		arr[i] = c;

	if (arr == NULL)
		return (0);

	return (arr);
}
