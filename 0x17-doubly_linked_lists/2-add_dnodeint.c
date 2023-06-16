#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to list head.
 * @n: integer to be included in the new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = *head;
		if (*head)
			(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
