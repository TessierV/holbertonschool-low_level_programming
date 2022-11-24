#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: key/value, if null print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;

	if (ht == NULL)
		return;
	else
	{
		index = 0;
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node)
			{
				printf("%s: %s\n", node->key,node->value);
				node = node->next;
			}
			index++;
		}
	}
}

