#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - return pointer to 2D array of integers
*
* @width: width of array
* @height: height of arry
*
* Return: pointer to 2D array
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	/*return NULL if width or height is 0*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Point ptr to pointer to rows*/
	ptr = malloc(height * sizeof(int *));

	/* Return NULL if memory allocation fails*/
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	/*Allocate memory of size with to each pointer*/
	ptr[i] = malloc(width * sizeof(int));

	/*On malloc fail, free previous rows, free ptr and return NULL*/
	if (ptr[i] == NULL)
	{
		for (i--; i >= 0; i--)
			free(ptr[i]);
		free(ptr);
		return (NULL);
	}
	/*initiate each element of 2D array with 0*/
	for (j = 0; j < width; j++)
		ptr[i][j] = 0;
	}

	return (ptr);
}
