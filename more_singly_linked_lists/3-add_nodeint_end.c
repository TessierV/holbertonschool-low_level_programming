#include "lists.h"
/**
 * add_nodeint_end - add new node of a end linked list
 * @head: list
 * @n: int
 * Return:newNode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
