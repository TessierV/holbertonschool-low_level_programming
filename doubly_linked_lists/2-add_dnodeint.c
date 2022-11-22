#include "lists.h"
/**
 * add_dnodeint - of a linked list
 * @head: list
 * @n: int
 * Return:newNode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
