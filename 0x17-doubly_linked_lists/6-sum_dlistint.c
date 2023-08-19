#include "lists.h"


/**
 * sum_dlistint - Function that sums all the data (n)
 * of a dlistint_t list
 *
 * @head: Pointer to head of list
 *
 * Return: Sum of linked list data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
