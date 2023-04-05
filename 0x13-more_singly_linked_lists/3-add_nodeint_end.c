#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 *
 * @head: pointer to the head of list
 * @n: integer value of new node
 *
 * Return: the address of new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *hold;

	/*copy address of first node to hold*/
	hold = *head;
	/*create new node*/
	newNode = malloc(sizeof(listint_t));
	/*return NULL if new node creation fails*/
	if (newNode == NULL)
		return (NULL);
	else
	{
		/*store value in node*/
		newNode->n = n;
		/*point next address of new node to NULL as it is the last node*/
		newNode->next = NULL;
	}
	/*traverse the list to add new node to the last node*/
	if (hold != NULL)
	{
		while (hold->next)
			hold = hold->next;
		hold->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
