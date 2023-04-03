#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/*create pointer to hold current node*/
	const listint_t *holdNode;
	size_t nodes = 0;

	holdNode = h;
	/*traverse through list and print each element*/
	while (holdNode)
	{
		printf("%d\n", holdNode->n);
		nodes += 1;
		holdNode = holdNode->next;
	}

	return (nodes);
}
