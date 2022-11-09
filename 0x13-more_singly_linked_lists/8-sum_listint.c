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
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
