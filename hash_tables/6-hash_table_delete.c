#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *rmNode;

	if (ht == NULL)
		return;
	index = 0;
	*node = NULL;
	*rmNode = NULL;
	else if (ht != NULL)
	{
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node)
			{
				rmNode = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = rmNode;
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}
}

