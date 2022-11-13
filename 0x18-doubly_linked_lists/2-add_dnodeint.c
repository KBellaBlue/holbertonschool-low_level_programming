#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: the start of the list
 * @n: the node to add
 *
 * Return: the address of the new element or NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	if (head == NULL)
		return (NULL);

	i = malloc(sizeof(dlistint_t));

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	i->n = n;
	i->prev = NULL;

	if (*head == NULL)
	{
		*head = i;
		i->next = NULL;
	}
	else
	{
		i->next = *head;
		(*head)->prev = i;
		*head = i;
	}


	return (i);
}
