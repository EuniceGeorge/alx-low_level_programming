#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert new node at given index
 * @h: input pointer to head of dlistint_t list
 * @idx: input index or n to add new node at, starting from 0
 * @n: input data to add for new node
 * Return: the node at index or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *tmp;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (h == NULL)
		return (newnode);
	if (idx == 0)
	{
		newnode->next = (*h);
		if ((*h) != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	tmp = *h;
	while (tmp != NULL)
	{
		count++;
		if (count == idx)
		{
			newnode->prev = tmp;
			newnode->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = newnode;
			tmp->next = newnode;
			return (newnode);
		}
		tmp = tmp->next;
	}
	free(newnode);
	return (NULL);
}
