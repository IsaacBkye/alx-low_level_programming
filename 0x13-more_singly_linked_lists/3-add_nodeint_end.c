#include "lists.h"
/**
 * add_nodeint_end - Add node to a list
 * @head: arg
 * @n: arg1
 * Return: Address of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *b;

	if (*head == NULL)
	{
		*head = (listint_t *)malloc(sizeof(listint_t));
		(*head)->n = n;
		(*head)->next = NULL;
	}
	a = (listint_t *)malloc(sizeof(listint_t));
	if (a == NULL)
		return (0);
	a->n = n;
	a->next = NULL;
	b = *head;
	while (b->next != NULL)
		b = b->next;
	b->next = a;
	return (a);
}
