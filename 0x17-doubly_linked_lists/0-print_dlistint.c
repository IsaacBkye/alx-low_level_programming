#include "lists.h"
/**
 * printDlistint1 - prints all the elements of a dlistint_t list.
 * @h: double linked list.
 * @ele: number of nodes.
 * Return: elements value.
 */
size_t printDlistint1(const dlistint_t *h, size_t eles)
{
	if (h)
	{
		printf("%i\n", h->n);
		elements = printDlistint1(h->next, ele + 1);
	}
	return (ele);
}
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	return (printDlistint1(h, 0));
}
