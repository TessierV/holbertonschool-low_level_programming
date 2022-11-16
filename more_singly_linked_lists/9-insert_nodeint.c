#include "lists.h"
/**
 * insert_nodeint_at_index - add new node of somewhere in the index list
 * @head: list
 * @idx: place in the index
 * @n: int
 * Return:newNode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *newNode;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head = NULL)
	{
		*head = newNode;
		return (newNode);
	}
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
			if (temp->next != NULL)
			{
				temp = temp->next;
			}
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
