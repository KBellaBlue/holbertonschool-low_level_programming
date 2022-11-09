#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 *
 * @head: the starting node of the list
 * @idx: index to insert
 * @n: the vale of the new node
 *
 * Return: address of new node or 0 or NULL if not possible
 *
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p, *a;

	if (head == NULL)
		return (NULL);

	p = *head;
	a = malloc(sizeof(listint_t));
	if(a == NULL)
		return (NULL);

	a->n = n;
	if (idx == 0)
	{
		a->next = p;
		*head = a;

		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (p)
			p = p->next;
		else
			return (NULL);
	}

	a->next = p->next;
	p->next = a;

	return (a);
}
