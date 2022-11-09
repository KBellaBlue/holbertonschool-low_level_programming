#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all nodes in list
 *
 * @head: the starting node of the list
 *
 * Return: total or 0
 *
 **/
int sum_listint(listint_t *head)
{
	listint_t *i;
	int p;

	if (head == NULL)
		return (0);

	i = head;

	while (i)
	{
		p += i->n;
		i = i->next;
	}

	return (p);
}
