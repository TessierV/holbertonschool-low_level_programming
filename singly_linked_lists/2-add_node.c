#include "lists.h"
/**
 * add_node - of a linked list
 * @h: pointer of the list
 * Return: i
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t* newNode; 
	newNode = malloc(sizeof(list_t*));
	
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
