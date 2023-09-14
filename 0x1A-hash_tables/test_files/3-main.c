#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	int result;

    ht = hash_table_create(1024);
    result = hash_table_set(ht, "betty", "cool");
	if (result == 1)
		printf("Hash table inser is a success!\n");
	printf("-------------------------------------\n");
    result = hash_table_set(ht, "hetairas", "cool");
	if (result == 1)
		printf("Hash table inser is a success!\n");
    result = hash_table_set(ht, "mentioner", "cool");
	if (result == 1)
		printf("Hash table inser is a success!\n");
	
    return (EXIT_SUCCESS);
}
