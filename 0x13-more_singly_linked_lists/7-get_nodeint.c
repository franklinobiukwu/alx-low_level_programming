#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list
 *
 * @head: pointer to the head list
 * @index: index of node
 *
 * Return: node at index or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hold;
	unsigned int i = 0;

	hold = head;
	while (hold && i < index)
	{
		hold = hold->next;
		i++;
	}

	if (i == index)
	{
		return (hold);
	}
	else
	{
		return (NULL);
	}
}
