#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node = NULL, *rmNode = NULL;

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				rmNode = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = rmNode;
			}
			free(node);
		}
		free(ht->array);
		free(ht);
	}
}

