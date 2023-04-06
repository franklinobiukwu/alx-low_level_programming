#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position
 *
 * @head: pointer to head pointer
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 *
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hold;
	listint_t *newNode;
	listint_t *temp;
	unsigned int i = 0;

	hold = *head;
	/*create new node*/
	newNode = malloc(sizeof(listint_t));
	/*return NULL if malloc fails*/
	if (newNode == NULL)
		return (NULL);
	/*assign n to new node*/
	newNode->n = n;
	/*traverse list to desired location*/
	while (hold && i < idx)
	{
		hold = hold->next;
		i++;
	}
	/*free newNode and return NULL if cannot add new node at index*/
	if (i != idx)
	{
		free(newNode);
		return (NULL);
	}
	/*insert new node*/
	temp = hold->next;
	hold->next = newNode;
	if (hold->next == NULL)
	{
		hold->next = newNode;
		newNode->next = NULL;
	}
	else
		newNode = temp;

	return (newNode);
}
