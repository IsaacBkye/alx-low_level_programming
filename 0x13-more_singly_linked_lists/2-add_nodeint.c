#include "lists.h"
/**
 * add_nodeint - Prints elements of a list
 * @head: arg
 * n: arg1
 * Return: Number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;
	
	if (head == NULL)
		return (0);
	a = (listint_t *)malloc(sizeof(listint_t));
	if (a == NULL)
		return (0);
	a->n = n;
	a->next = *head;
	*head = a;
	return (*head);
}
