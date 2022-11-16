#include "lists.h"
/**
 * free_listint - print the len of a linked list
 * @head: pointer of the list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
	}
	else
	{
		free_listint(head->next);
		free(head);
	}
}
