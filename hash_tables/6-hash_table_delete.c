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
	else if (ht != NULL)
	{
		index = 0;
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
			free(newNnode);
		}
		free(ht->array);
		free(ht);
	}
}

