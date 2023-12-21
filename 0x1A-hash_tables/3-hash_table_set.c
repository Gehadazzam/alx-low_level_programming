#include "hash_tables.h"
/**
*hash_table_set - add an element to the hash table
*@ht: first member
*@key: seconed one
*@value: third one
*Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx = 0;
hash_node_t *current = NULL, *new;
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	current = ht->array[idx];
	while (current != NULL)
{
		if (strcmp(current->key, key) == 0)
{
			free(current->value), current->value = strdup(value);
			return (1);
}
		current = current->next;
}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value), new->key = strdup(key), new->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
		new->next = ht->array[idx], ht->array[idx] = new;
	return (1);
}
