#include "lists.h"
/**
 * add_node - Adds a nodes
 * @head: Pointer to head
 * @str: String to put in element
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a = (list_t *)malloc(sizeof(head));

	if (a == NULL)
		return (NULL);
	a->str = strdup(str);
	a->len = strlen(str);
	a->next = *head;
	*head = a;
	return (*head);
}
