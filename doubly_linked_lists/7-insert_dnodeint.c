#include "lists.h"
/**
 * insert_dnodeint_at_index - add new node of somewhere in the index list
 * @h: list
 * @idx: place in the index
 * @n: int
 * Return:newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*h = newNode;
		return (newNode);
	}
	newNode->n = n;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	temp = newNode->next;
	temp->prev = newNode;
	return (newNode);
}
