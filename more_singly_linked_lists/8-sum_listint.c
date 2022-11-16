#include "lists.h"
/**
 * sum_listint - summary list
 * @head: list
 *
 * Return: result
 */
int sum_listint(listint_t *head)
{
	int  sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
