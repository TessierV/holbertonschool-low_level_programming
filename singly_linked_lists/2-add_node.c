#include "lists.h"
/**
 * add_node - of a linked list
 * @head: list
 * @str: string
 * Return:newNode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
