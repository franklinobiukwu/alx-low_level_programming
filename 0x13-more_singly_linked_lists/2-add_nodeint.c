#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to the head of list
 * @n: integer value of new node
 *
 * Return: the address of new element, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
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
	/*store value in node*/
	newNode->n = n;
	/*manipulate links to make new node the first node*/
	*head = newNode;
	newNode->next = hold;

	return (newNode);
}
