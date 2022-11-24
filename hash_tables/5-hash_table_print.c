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
	char *comma = "";

	if (ht == NULL)
		return;
	else if (ht != NULL)
	{
		index = 0;
		putchar('{');
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node)
			{
				printf("%s", comma);
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				comma = ", ";
			}
			index++;
		}
		printf("}\n");
	}
}

