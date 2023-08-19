#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new
 * node at the end of a dlistint_t list.
 *
 * @head: Pointer to head pointer of list
 * @n: Value of new node
 *
 * Return: Address of the new node of NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	/*return NULL if malloc fails*/
	if (new_node == NULL)
		return (NULL);
	/*Set value of new node*/
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*Set head pointer to point to new node if NULL*/
	if (current == NULL)
		*head = new_node;
	else
	{
		/*Travers to end of list*/
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
