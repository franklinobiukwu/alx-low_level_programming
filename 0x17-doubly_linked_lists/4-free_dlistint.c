#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t
 *
 * @head: Pointer to head of list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *previous;

	while (current)
	{
		previous = current;
		current = current->next;
		free(previous);
	}
}
