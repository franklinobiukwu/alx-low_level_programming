#include "lists.h"

/**
 * listint_len - returns the number of
 * elements in a lined listint_t list
 *
 * @h: pointer to head
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *hold;

	hold = h;
	while (hold)
	{
		if (hold->n)
		{
			elements += 1;
		}
		hold = hold->next;
	}
	return (elements);
}
