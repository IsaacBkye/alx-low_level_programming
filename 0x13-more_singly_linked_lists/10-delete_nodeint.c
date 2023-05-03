#include "lists.h"
/**
 * delete_nodeint_at_index - Add node to a list at index
 * @head: arg
 * @index: arg1
 * Return: Address of node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;
	unsigned int j = 0;

	b = *head;
	if (b == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}
	for (j = 0; j < index; j++)
	{
		b = b->next;
		if (b == NULL)
		{
			return (-1);
		}
	}
	a = b->next->next;
	free(b->next);
	b->next = a;
	return (1);
}
