#include "lists.h"
/**
 * add_node - Adds a nodes
 * @head: Pointer to head
 * @str: String to put in element
 * Return: Address of new element 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	
	unsigned int slen = 0;
	node = *head;
	*head = malloc(sizeof(list_t));
	if (*head)
	{
		if (str)
		{
			while (str[slen])
				slen++;
			(*head)->len = slen;
			(*head)->str = strdup(str);
		}
		else
		{
			(*head)->len = 0;
			(*head)->str = "(nil)";
		}
		(*head)->next = node;
	}
	return (*head);
}
