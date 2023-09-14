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
	
	/*Return 0 if arguments are invalid*/
	if (!ht || !key || *key == '\0' || !value)
		return (0);

	/*Create node*/
	node = create_node(key, value);

	/*Return 0 if node creation fails*/
	if (node == NULL)
		return (0);

	/*Determine the index to add element to hash table*/
	index = key_index((unsigned char*) key, ht->size);

	/*Check for collision*/
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		head = ht->array[index];
		/*Check for collision*/
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}


/**
* create_node - function that creates a node
*
* @key: key of node
* @value: value to be stored in node
*
* Return: new node on success, NULL on error
*/

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	/*Return 0 if malloc fails*/
	if (node == NULL)
		return (NULL);

	/*set values of node*/
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free (node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free (node->key);
		free (node);
		return (NULL);
	}
	node->next = NULL;

	return (node);
}
