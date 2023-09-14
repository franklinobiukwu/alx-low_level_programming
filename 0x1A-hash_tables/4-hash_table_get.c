#include "hash_tables.h"
#include "structs.h"

/**
* hash_table_get - function that retrieves a value associated with a key
*
* @ht: hash table
* @key: key
*
* Return: value on success or NULL on failure
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;


	/*Return NULL if ht or key is invalid or not provided*/
	if (!ht || !key)
		return (NULL);

	/*Determine Index of value to be retrieved*/
	index = key_index((unsigned char*) key,  ht->size);

	/*Return NULL if index is beyond table size*/
	if (index >= ht->size)
		return (NULL);

	/*Check for match of key in index or chain and return value if match*/
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
