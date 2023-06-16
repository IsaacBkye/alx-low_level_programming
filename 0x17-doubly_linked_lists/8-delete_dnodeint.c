#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given position.
 * @head: double pointer list.
 * @index: index inserting position.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *__node = *head, *tmp = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp);
		}
		else
			*head = NULL;
		return (1);
	}
	while (a < index - 1 && __node)
	{
		__node = __node->next;
		a++;
	}
	if (__node)
	{
		tmp = __node->next;
		if (tmp->next)
			tmp->next->prev = __node;
		__node->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
