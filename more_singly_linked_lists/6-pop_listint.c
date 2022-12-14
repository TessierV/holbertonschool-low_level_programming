#include "lists.h"
/**
 * pop_listint - this delete the head node
 * @head: pointer of the list
 *
 * Return: the new headnode
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (i);
}
