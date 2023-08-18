#include "lists.h"

/**
 * dlistint_len - Function that returns the number of
 * elements in a linked dlistint_t list
 *
 * @h: Pointer to head of list
 *
 * Return: Number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	/*Return 0 if no element in list*/
	if (!current)
		return (0);
	/*count number of elements in list*/
	while (current)
	{
		count++;
		current = current->next;
	}

	return (count);
}
