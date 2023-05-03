#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: arg
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *a = NULL;

	if (head == NULL)
	{
		return;
	} else if (head->next == NULL)
	{
		free(head);
		head = NULL;
	} else
	{
		while (head != NULL)
		{
			a = head;
			head = a->next;
			free(a);
		}
	}
}
