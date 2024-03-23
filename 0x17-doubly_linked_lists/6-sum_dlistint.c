#include "lists.h"

/**
 * sum_dlistint - function to sum all elements of a dlistint list
 * @head: input head of dlistint_t list
 * Return: int sum of data from all elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
