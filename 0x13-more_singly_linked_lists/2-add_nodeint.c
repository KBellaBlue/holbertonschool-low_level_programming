#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint- Adds new node to front of list
 *
 * @head: the starting node of the list
 * @n: the number for the new node
 *
 * Return: address of new list or NULL
 *
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
