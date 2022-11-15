#include "lists.h"
/**
 * add_node_end - add new node of a end linked list
 * @head: list
 * @str: string
 * Return:newNode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
