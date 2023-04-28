#include "lists.h"
/**
 * print_list - Prints number of nodes
 * @h: lists passed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 1;
	list_t *a = (list_t *)malloc(sizeof(h));

	if (a == NULL)
		return (0);
	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	a = h->next;
	while (a != NULL)
	{
		if (a->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", a->len, a->str);
		a = a->next;
		i++;
	}
	return (i);
}
