#include "lists.h"
/**
 * dlistintLen1 - number of elements in a linked dlistint_t list.
 * @h: double linked list.
 * @ele: number of nodes.
 * Return: number of elements value.
 */
size_t dlistintLen1(const dlistint_t *h, size_t ele)
{
	if (h)
		ele = dlistintLen1(h->next, ele + 1);
	return (ele);
}
/**
 * dlistint_len - get the number of elements of a dlistint_t list.
 * @h: double linked list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	return (dlistintLen1(h, 0));
}
