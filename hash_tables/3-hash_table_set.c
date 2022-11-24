#include "hash_tables.h"
/**
 * hash_table_set - add an element and update in hash table
 * @ht: hash table
 * @key: key
 * @value: value inside the table
 *
 * Return: 1 if success 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int kindex;
	hash_node_t *newNode, *upd;

	if (ht == NULL || key == NULL)
		return (0);

	kindex = key_index((const unsigned char *)key, ht->size);
	newNode = malloc(sizeof(hash_node_t *));

	if (newNode == NULL)
		return (0);
	newNode->key = strdup((char *)key);
	newNode->value = strdup((char *) value);

	upd = ht->array[kindex];
	if (upd != NULL)
	{
		if (strcmp(upd->key, key) == 0)
		{
			upd->value = strdup(value);
			return (1);
		}
		
	}
	upd = newNode;
	return (1);
}

