#include "lists.h"
/**
 * free_listint2 - print the len of a linked list
 * @head: pointer of the list
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		free(*head);
	}
	else
	{
		free_listint2(*head->next);
		free(*head);
	}
}
