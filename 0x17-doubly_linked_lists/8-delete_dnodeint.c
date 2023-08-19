#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes
 * node at index of a dlistint_t linked list
 *
 * @head: Pointer to head of list
 * @index: Index of node to delete
 *
 * Return: 1 on success or 0 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	/*Return 0 if list is empty*/
	if (*head == NULL)
		return (0);
	/*Delete node at index 0*/
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/*Delete node at other index*/
	while (current)
	{
		if (count == index)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}

	return (0);
}
