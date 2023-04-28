#include "lists.h"
/**
 * add_node_end - Adds a nodes
 * @head: Pointer to head
 * @str: String to put in element
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a = (list_t *)malloc(sizeof(list_t));
	list_t *b = (list_t *)malloc(sizeof(list_t));
	int i = 0;

	if (a == NULL || b == NULL)
		return (NULL);
	a->str = strdup(str);
	while(str[i] != '\0')
		i++;
	a->len = i;
	if (*head == NULL)
	{
		*head = a;
		a->next = NULL;
		return (*head);
	}
	b = *head;
	while (b->next != NULL)
		b = b->next;
	b->next = a;
	a->next = NULL;
	return (*head);
}
