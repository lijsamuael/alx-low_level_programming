#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hnode;
	int comm = 0;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode)
		{
			if (comm)
				printf(", ");
			printf("'%s': '%s'", hnode->key, hnode->value);
			hnode = hnode->next;
			comm = 1;
		}
	}
	printf("}\n");
}
