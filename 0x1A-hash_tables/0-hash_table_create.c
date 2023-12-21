#include "hash_tables.h"

/**
*hash_table_create - creat a hash table
*
*@size: the size of hash
*
*Return: pointer to the hash or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int num;
hash_table_t *new_hash;
	if (!size)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t) * size);
	if (new_hash->array == NULL)
{
		return (NULL);
}
	for (num = 0; num < size; num++)
		new_hash->array[num] = NULL;
	return (new_hash);
}
