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
	dlistint_t *temp = *h, *newNode;
	unsigned int i;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL || temp == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0 || *h == NULL)
	{
		newNode->next = NULL;
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	else
	{
		temp = *h;
		for (i = 0; i < idx -1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			return (temp);
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
		temp = newNode->next;
		temp->prev = newNode;
	}
	return (newNode);
}
