#include "hash_tables.h"

/**
* hash_table_create - hash table
* @size: unsigned long int
* Return: a pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	if (size == 0)
		return (NULL);

	h = malloc(sizeof(hash_table_t));
	if (h == '\0')
		return (NULL);

	h->size = size;
	h->array = calloc(size, sizeof(hash_node_t *));
	if (h->array == '\0')
		return (NULL);

	return (h);
}
