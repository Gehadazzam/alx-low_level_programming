#include "hash_tables.h"
/**
*hash_table_get - get specific value
*@ht: first member
*@key: seconed one
*Return: value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *current;
unsigned long int idx = 0;
	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current != NULL)
{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
}
return (NULL);
}
