#include "hash_tables.h"
/**
*key_index - get index key
*
*@key: first member
*@size: seconed one
*
*Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
