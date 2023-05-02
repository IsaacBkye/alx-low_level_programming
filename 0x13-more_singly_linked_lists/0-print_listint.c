#include "lists.h"
/**
 * print_listint - Prints elements of a list
 * @h: arg
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		elements += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
