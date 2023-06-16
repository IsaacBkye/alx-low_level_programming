#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list.
 * @head: pointer head.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
