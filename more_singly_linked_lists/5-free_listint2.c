#include "lists.h"
/**
 * free_listint2 - print the len of a linked list
 * @head: pointer of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
	{
		free(head);
	}
	temp = *head;
	while (*head != NULL)
	{
		*head = temp->next;
		free(temp);
	}
}
