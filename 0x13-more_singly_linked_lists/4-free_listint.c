#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head of linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t hold;

	/*traverse list and free each node while node not NULL*/
	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
