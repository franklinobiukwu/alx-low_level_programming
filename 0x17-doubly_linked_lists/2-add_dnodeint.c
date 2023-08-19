#include "lists.h"

/**
 * add_dnodeint - Function that adds a new
 * node at the beginning of a dlistint_t
 *
 * @head: Pointer to the head pointer of list
 * @n: value of new node
 *
 * Return: Address of new node or NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	/*Create new node*/
	new_node = malloc(sizeof(dlistint_t));
	/*Return NULL if malloc fails*/
	if (new_node == NULL)
		return (NULL);
	/*Set the value of new node*/
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (current == NULL)
		*head = new_node;
	else
	{
		/*Add new node to beginning of list*/
		while ((current)->prev != NULL)
			current = current->prev;
		new_node->next = current;
		current->prev = new_node;
		current = new_node;
	}
	*head = new_node;

	return (new_node);
}
