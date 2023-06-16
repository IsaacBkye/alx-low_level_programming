#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer list.
 * @idx: index inserting position.
 * @n: data for new node .
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *tmp = *h;

	if (newNode)
	{
		newNode->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				newNode->next = *h;
				(*h)->prev = newNode;
			}
			*h = newNode;
			return (newNode);
		}
		while (a < idx - 1 && tmp)
		{
			tmp = tmp->next;
			a++;
		}
		if (tmp)
		{
			if (tmp->next)
				tmp->next->prev = newNode;
			newNode->next = tmp->next;
			newNode->prev = tmp;
			tmp->next = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
