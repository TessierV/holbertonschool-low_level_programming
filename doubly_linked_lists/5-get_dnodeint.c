#include "lists.h"
/**
 * get_dnodeint_at_index - dlist_node at index
 * @head: list
 * @index: start
 *
 * Return: list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
