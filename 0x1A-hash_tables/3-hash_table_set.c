#include "hash_tables.h"

/**
 * hash_table_set - adds element hash table
 * @ht: hast table
 * @key: key hash table
 * @value: value key
 *
 * Return: 1 succeeded, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hnode = NULL;
	hash_node_t *collnode = NULL;
	unsigned long int index;
	char *valueup = NULL;
	char *keyup = NULL;

	if (!ht || !(ht->array) || !key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hnode = ht->array[index];
	valueup = strdup(value);
	if (!valueup)
		return (0);

	while (hnode != NULL)
	{
		if (!strcmp(hnode->key, key))
		{
			free(hnode->value);
			hnode->value = valueup;
			return (1);
		}
		hnode = hnode->next;
	}

	hnode = ht->array[index];

	collnode = malloc(sizeof(hash_node_t));
	if (collnode == NULL)
		return (free(valueup), 0);

	keyup = strdup(key);
	if (!keyup)
		return (free(valueup), free(collnode), 0);
	collnode->key = keyup;
	collnode->value = valueup;
	collnode->next = hnode;
	ht->array[index] = collnode;
	return (1);
}
