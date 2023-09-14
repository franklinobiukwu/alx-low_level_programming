#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>

/*STRUCTS*/
#include "structs.h"

/*PROTOTYPES*/
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif /*HASH_TABLES_H*/
