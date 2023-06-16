#include "lists.h"
/**
 * getNode1 - get the nth node of dlistint_t linked list recursively.
 * @head: pointer list.
 * @n: nodes acumlated as param.
 * @index: index node to return.
 * Return: nth node.
 */
dlistint_t *getNode1(dlistint_t *head, unsigned int index, unsigned int n)
{
	if (head)
	{
		if (n == index)
			return (head);
		head = getNode1(head->next, index, n + 1);
	}
	return (head);
}
/**
 * get_dnodeint_at_index - get the nth node oa dlistint_t linked list.
 * @head: double pointer list.
 * @index: index wanted node.
 * Return: the wanted node by index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int a = 0;

	return (getNode1(head, index, a));
}
