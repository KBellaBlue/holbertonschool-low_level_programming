#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: the start of the list
 * @n: the node to add
 *
 * Return: the address of the new element or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *p;

	if (head == NULL)
		return (NULL);

	i = malloc(sizeof(dlistint_t));

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		i->prev = NULL;
		*head = i;
	}
	else
	{
		p = *head;
		while (p->next)
		{
			p = p->next;
		}
		p->next = i;
		i->prev = p;
	}


	return (i);
}
