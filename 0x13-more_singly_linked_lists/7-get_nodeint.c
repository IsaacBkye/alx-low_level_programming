#include "lists.h"
/**
 * get_nodeint_at_index - Get node at a particular position
 * @head: arg
 * @index: arg1
 * Return: Address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a = NULL;
	unsigned int b = 0, c;

	if (head == NULL)
		return (NULL);
	a = head;
	while (a != NULL)
	{
		b++;
		a = a->next;
	}
	if (index > b)
		return (NULL);
	a = head;
	for (c = 0; c < index; c++)
		a = a->next;
	return (a);
}
