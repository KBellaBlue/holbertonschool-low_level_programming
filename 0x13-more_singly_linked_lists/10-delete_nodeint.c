#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 *
 * @head: the starting node of the list
 * @index: index to delete
 *
 * Return: 1 if succeeded or -1 if faled
 *
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p, *a;

	if (head == NULL || *head == NULL)
		return (-1);

	p = *head;

	if (index == 0)
	{
		a = p;
		*head = p->next;
		free(a);

		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (p->next)
				p = p->next;
			else
				return (-1);
		}
	}

	a = p->next;
	p->next = a->next;
	free(a);

	return (1);
}
