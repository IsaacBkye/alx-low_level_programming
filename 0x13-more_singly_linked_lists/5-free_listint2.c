#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: arg
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *a = NULL;

	if ((*head)->next == NULL)
	{
		free(*head);
		head = NULL;
	} else
	{
		while (*head != NULL)
		{
			a = *head;
			*head = a->next;
			free(a);
		}
	}
}
