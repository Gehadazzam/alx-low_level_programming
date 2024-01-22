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
unsigned long int num = 0;
hash_table_t *new_hash;
	if (!size)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
{
		free(new_hash);
		return (NULL);
}
	for (; num < size; num++)
		new_hash->array[num] = NULL;
	new_hash->size = size;
	return (new_hash);
}
