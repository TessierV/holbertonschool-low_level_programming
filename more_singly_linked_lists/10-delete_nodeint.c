#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node of somewhere in the index list
 * @head: list
 * @index: place in the index
 * Return: 1 if true  -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *rmNode;
	unsigned int i;

	temp = *head;
	if (head == NULL || temp == NULL)
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
			if (temp->next != NULL)
			{
				temp = temp->next;
			}
		}
		rmNode = temp->next;
		temp->next = rmNode->next;
		free(rmNode);
	}
	return (1);
}
