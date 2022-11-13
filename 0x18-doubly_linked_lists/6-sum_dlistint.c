#include "lists.h"

/**
 * sum_dlistint - returns sum of all nodes
 *
 * @head: the start of the list
 *
 * Return: the sum or 0
 **/
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (00000);

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
