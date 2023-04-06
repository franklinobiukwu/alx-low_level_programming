#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 *
 * @head: pointer to head of the list
 *
 * Return: sum of all data(n) or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hold;

	hold = head;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (hold)
		{
			sum += hold->n;
			hold = hold->next;
		}
	}

	return (sum);
}
