#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts
 * node at a given position
 *
 * @h: Pointer to head pointer of the list
 * @idx: Index where new node should be added
 * @n: Value of new nod
 *
 * Return: Address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	/*Create new node*/
	new_node = malloc(sizeof(dlistint_t));
	/*Return NULL if malloc fails*/
	if (new_node == NULL)
		return (NULL);
	/*Set values of new node*/
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*Return NULL if list is empty and index is out of range*/
	if (current == NULL && idx > 0)
		return (NULL);
	/*Insert new node at desired index*/
	while (current)
	{
		if (count == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			break;
		}
		count++;
		current = current->next;
	}
	/*Return NULL if index is out of range*/
	if (current == NULL)
		return (NULL);

	return (new_node);
}
