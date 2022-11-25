#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;

	if (ht == NULL)
		return;
	else if (ht != NULL)
	{
		index = 0;
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node)
			{
				node = node->next;
				free(node->key);
				free(node->value);
			}
			index++;
		}
		free(ht->size);
		free(ht);
	}
}

