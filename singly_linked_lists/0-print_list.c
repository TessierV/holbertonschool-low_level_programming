#include "lists.h"
/**
 * print_list - print the linked list
 * @h: pointer of the list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
	} return (i);
}
