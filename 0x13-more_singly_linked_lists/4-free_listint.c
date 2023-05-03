#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: arg
 * 
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	unsigned int i, j;
	listint_t *a;

	if (head == NULL)
	{
		return;
	} else if (head->next == NULL)
	{
		free(head);
		head = NULL;
	} else
	{
		a = head;
		while(a != NULL)
		{
			i++;
			a = a->next;
		}
		j = i;
		a = head;
		while (a != NULL)
		{
			for (i = j; i > 0; i--)
				a = a->next;
			free(a);
			a = NULL;
			j--;
			a = head;
		}
		/*a->next = NULL;*/
		free(a);
		a->next = NULL;
	}
}
