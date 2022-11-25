#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: table size
 *
 * Return: if fails return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	if (size > 0)
	{
		newtable = malloc(sizeof(hash_table_t));
		if (newtable == NULL)
		{
			free(newtable);
			return (NULL);
		}
		newtable->size = size;
		newtable->array = malloc(size * sizeof(hash_node_t *));
		if (newtable->array == NULL)
		{
			free(newtable);
			return (NULL);
		}
		return (newtable);
	}
	return (NULL);
}
