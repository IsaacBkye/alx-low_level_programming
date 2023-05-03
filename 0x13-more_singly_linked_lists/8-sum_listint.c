#include "lists.h"
/**
 * sum_listint - Sum element of all nodes
 * @head: arg
 * Return: Elements resultant
 */
int sum_listint(listint_t *head)
{
	listint_t *a;
	int b = 0;

	if (head == NULL)
		return (0);
	a = head;
	while (a != NULL)
	{
		b += a->n;
		a = a->next;
	}
	return (b);
}
