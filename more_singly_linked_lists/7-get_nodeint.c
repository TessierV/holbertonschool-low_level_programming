#include "lists.h"
/**
 * get_nodeint_at_index -list_node at index
 * @head: list
 * Return: list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  i;
	for (i = 0; i < index; i++)
	{
		head = head->next;
	} 
	return (head);
}
