#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to proviously allocated memory
* @old_size: size in bytes of previously allocated memory
* @new_size: size of new memory
*
* Return: pointer to void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	/*free ptr and return NULL if new_size is 0 and ptr is not NULL*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*return ptr if new_size is equal to old_size*/
	if (new_size == old_size)
		return (ptr);
	/*allocate memory of size new_size using malloc*/
	new_ptr = malloc(new_size);
	/*return NULL if malloc fails*/
	if (new_ptr == NULL)
		return (NULL);
	/*return new_ptr if ptr is NULL*/
	if (ptr == NULL)
		return (new_ptr);
	/*copy contents of ptr to new_ptr*/
	for (i = 0; i < old_size; i++)
		new_ptr[i] = *((char *) ptr + i);
	/*free ptr*/
	free(ptr);
	/*return new_ptr*/
	return (new_ptr);

}
