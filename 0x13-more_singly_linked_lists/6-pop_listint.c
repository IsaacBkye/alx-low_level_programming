#include "lists.h"
/**
 * pop_listint - Pop element, delete node
 * @head: arg
 * Return: Element
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (*head == NULL)
		return (0);
	a = *head;
	b = (*head)->n;
	*head = a->next;
	free(a);
	a = NULL;
	return (b);

}
