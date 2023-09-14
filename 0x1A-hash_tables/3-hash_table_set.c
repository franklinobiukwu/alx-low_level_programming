#include "hash_tables.h"
#include "structs.h"

/**
* hash_table_set - function that adds an element to thehash table
*
* @ht: hash table
* @key: key
* @value: value to be added to hash table
*
* Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *head;

	node = malloc(sizeof(hash_node_t));

	/*Return 0 if malloc fails*/
	if (node == NULL)
		return 0;

	/*set values of node*/
	node->key = (char *) key;
	node->value = (char *) value;
	node->next = NULL;

	/*Determine the index to add element to hash table*/
	index = key_index((unsigned char*) key, ht->size);

	/*Check for collision*/
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		head = ht->array[index];
		while (head->next)
			head = head->next;
		head->next = node;
	}

	return (1);
}
