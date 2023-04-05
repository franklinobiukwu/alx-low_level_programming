#include "lists.h"

/**
 *  pop_listint - function that deletes the head node of a
 *  listint_t linked list, and returns the head node’s data (n)
 *
 *  @head: pointer to the pointer to the head of list
 *
 *  Return: 0 or head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int data;

	/*return 0 is list is empty*/
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		/*delete head hode*/
		hold = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(hold);
	}

	return (data);
}
