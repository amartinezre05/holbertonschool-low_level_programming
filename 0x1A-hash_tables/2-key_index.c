#include "hash_tables.h"

/**
* key_index - return the index of the key
* @key: pointer to char
* @size: unsigned long int
* Return: a pointer
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == '\0' || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
