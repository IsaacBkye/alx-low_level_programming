#include "lists.h"
/**
 * print_listint - Prints elements of a list
 * @h: arg
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	
	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		elements += 1;
		h = h->next;
	}
	return (elements);
}
