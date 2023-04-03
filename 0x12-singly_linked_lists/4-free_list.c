#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: pointer to head of linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	/*free head if NULL*/
	if (head == NULL)
		free(head);
	else
	{
		while (head && head->next)
		{
			currentNode = head;
			head = head->next;
			free(currentNode->str);
			free(currentNode);
		}
		free(head);
	}
}
