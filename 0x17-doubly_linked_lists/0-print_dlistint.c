#include "lists.h"


/**
 * print_dlistint - Function that prints all element of a dlistint_t list
 *
 * @h: pointer to head of list
 *
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	/*Return 0 if no node*/
	if (h == NULL)
		return (0);
	/*Count nodes if available*/
	while (current)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}

	return (count);
}
