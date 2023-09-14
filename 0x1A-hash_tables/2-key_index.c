#include "hash_tables.h"

/**
* key_index - function that returns the index of a key
*
* @key: key
* @size: size of the array of the hash table
*
* Return: index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2((unsigned char *) key);

	index = hash % size;

	return (index);
}
