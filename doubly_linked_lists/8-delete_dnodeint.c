#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node of somewhere in the index list
 * @head: list
 * @index: place in the index
 * Return: 1 if true  -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *rmNode;
	unsigned int i;

	temp = *head;
	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				return (-1);
			}
		}
		rmNode = temp->next;
		temp->next = rmNode->next;
		free(rmNode);
	}
	return (1);
}
