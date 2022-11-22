#include "lists.h"
/**
 * insert_nodeint_at_index - add new node of somewhere in the index list
 * @head: list
 * @idx: place in the index
 * @n: int
 * Return:newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp = *head, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL || temp == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
