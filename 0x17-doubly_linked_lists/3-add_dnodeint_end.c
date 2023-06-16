#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: pointer arg
 * @n: integer arg.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *newNode = malloc(sizeof(dlistint_t));

	if (newNode)
	{
		newNode->n = n;
		if (*head)
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = newNode;
			newNode->prev = tmp;
		}
		else
			*head = newNode;
	}
	return (newNode);
}
