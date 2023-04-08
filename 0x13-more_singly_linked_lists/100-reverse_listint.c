#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t lined list
 *
 * @head: pointer to head pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd;
	listint_t *prev;

	prev = NULL;

	/*traverse through the list to get to the end*/
	while (*head)
	{
		/*save next node address*/
		fwd = (*head)->next;
		/*set link to point to previous node (i.e. backwards)*/
		(*head)->next = prev;
		/*save current node address as previous*/
		prev = (*head);
		/*move head to next node*/
		(*head) = fwd;
	}
	/*make the head pointer point to last node*/
	(*head) = prev;

	return (*head);
}
