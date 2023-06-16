#include "lists.h"
/**
 * sumDlistint1 - sum node values recursively.
 * @head: pointer list.
 * @sum: sum node data.
 * Return: sum.
 */
int sumDlistint1(dlistint_t *head, int sum)
{
	if (head)
		sum = sumDlistint1(head->next, sum + head->n);
	return (sum);
}
/**
 * sum_dlistint - get the nth node of dlistint_t linked list.
 * @head: pointer list.
 * Return: sum result.
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	return (sumDlistint1(head, a));
}
