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
	unsigned long int i;

	if (size > 0)
	{
		newtable = malloc(sizeof(hash_table_t));
		if (newtable == NULL)
		{
			return (NULL);
		}
		newtable->array = malloc(size * sizeof(hash_table_t *));
		if (newtable->array == NULL)
		{
			free(newtable);
			return (NULL);
		}
		newtable->size = size;
		for (i = 0; i < size; i++)
		{
			newtable->array[i] = NULL;
		}
		return (newtable);
	}
	return (NULL);
}
