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
	int i = 0;

	if (a == NULL || head == NULL)
		return (NULL);
	a->str = strdup(str);
	while (str[i] != '\0')
		i++;
	a->len = i;
	a->next = *head;
	*head = a;
	return (*head);
}
