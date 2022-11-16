#include "lists.h"
/**
 * listint_len - print the len of a linked list
 * @h: pointer of the list
 * Return: i
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	} return (i);
}
