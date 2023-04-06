#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node
 * at a particular index of a listint_t linked list
 *
 * @head: pointer to head pointer of linked list
 * @index: index of node that should be deleted.
 * index starts at zero
 *
 * Return: 1 if success or -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode, *hold, *prev;
	unsigned int i = 0;

	hold = *head;
	/*return head is NULL*/
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (1);
	}
	/*traverse list to index*/
	while (hold && i < index)
	{
		if (hold->next == NULL)
			return (-1);
		prev = hold;
		hold = hold->next;
		i++;
	}
	delNode = hold;
	hold = hold->next;
	prev->next = hold;
	/*delete node at index*/
	free(delNode);

	return (1);
}
