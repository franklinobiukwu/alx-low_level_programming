#include "lists.h"


/**
 * get_dnodeint_at_index - Function that returns the nth
 * node of a dlistint_t linked list
 *
 * @head: Pointer to head of list
 * @index: Index of node to be returned
 *
 * Return: index of node, or NULL on fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
		return (NULL);
	while (current)
	{
		current = current->next;
		count++;
		if (count == index)
			break;
	}

	return (current);
}
