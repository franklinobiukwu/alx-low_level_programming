#include "lists.h"

/**
* add_node_end - adds a new node at theend of a list_t
*
* @head: head of linked list
* @str: string to store in the list
*
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *currentNode;
	size_t i;

	/*store address of first node in current node*/
	currentNode = (*head);
	/*create memory for new node*/
	newNode = malloc(sizeof(list_t));
	/*return NULL if malloc fails*/
	if (newNode == NULL)
		return (NULL);
	/*duplicate string and store value in new node*/
	newNode->str = strdup(str);
	/*obtain length of string*/
	for (i = 0; str[i]; i++)
		;
	/*assign length of string to new node length member*/
	newNode->len = i;
	/*make new node the end of list*/
	newNode->next = NULL;
	/*point head to new node if head (i.e list) is NULL*/
	if ((*head) == NULL)
		(*head) = newNode;
	else /*traverse the linked list and point to the last node*/
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}

	return (newNode);
}
