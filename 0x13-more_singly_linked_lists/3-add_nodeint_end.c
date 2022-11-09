#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end- Adds new node to end of list
 *
 * @head: the starting node of the list
 * @n: the number for the new node
 *
 * Return: address of new element or NULL
 *
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *p;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	p = *head;

	if (*head == NULL)
		*head = i;

	else
	{
		while (p->next)
		{
			p = p->next;
		}
		p->next = i;
	}

	return (i);
}
