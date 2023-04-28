#include "lists.h"
/**
 * list_len - Prints number of elements
 * @h: lists passed
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 1;
	list_t *a = (list_t *)malloc(sizeof(h));

	if (a == NULL)
		return (0);
	if (h == NULL)
	{
		return (0);
	}
	a = h->next;
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}
