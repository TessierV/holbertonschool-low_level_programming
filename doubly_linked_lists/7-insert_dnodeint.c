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
	newNode->n =  n;
	temp = *h;
	if (temp == NULL)
	{
		newNode->prev->next = NULL;
		*h = newNode;
		return (newNode);
	}
	if (idx == 0 || *h == NULL)
	{
		newNode->prev = NULL;
		newNode->next = temp;
		temp->prev = newNode;
		*h = newNode;
		return(newNode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
	{
		
		return (temp);
	}
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	temp = newNode->next;
	temp->prev = newNode;
	return (newNode);
}
