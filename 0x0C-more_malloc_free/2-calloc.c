#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
*
* @nmemb: array element count
* @size: array type size
*
* Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int blck_size, i;

	/*return NULL if array element count or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*memory size*/
	blck_size = nmemb * size;
	/*allocate memory and assigne to pointer*/
	arr = malloc(blck_size);
	/*return NULL if malloc fails*/
	if (arr == NULL)
		return (NULL);
	/*set memory to 0*/
	for (i = 0; i < blck_size; i++)
		arr[i] = 0;
	return (arr);
}
