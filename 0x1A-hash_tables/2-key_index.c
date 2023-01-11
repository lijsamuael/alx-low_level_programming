#include "hash_tables.h"

/**
 * key_index - index of a key
 * @key: key
 * @size: array for hash table
 *
 * Return: index with key storage in array
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
