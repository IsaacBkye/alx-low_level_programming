#include "lists.h"
/**
 * insert_nodeint_at_index - Add node to a list at index
 * @head: arg
 * @idx: arg1
 * @n: arg2
 * Return: Address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int j = 0;

	a = (listint_t *)malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;
	b = *head;
	if (b == NULL)
	{
		*head = a;
		return (a);
	}
	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}
	for (j = 0; j < idx; j++)
	{
		b = b->next;
		if (b == NULL)
		{
			free(a);
			return (NULL);
		}
	}
	a->next = b->next;
	b->next = a;
	return (a);
}
