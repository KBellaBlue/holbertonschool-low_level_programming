#include "lists.h"

/**
 * print_dlistint_backward - print all elements of a list backwards
 *
 * @h: the start of the list
 *
 * Return: the number of nodes
 **/
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t i, p;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h->next != NULL; i++)
	{
		h = h->next;
	}

	i++;

	for (p = i; p > 0; p--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}

	return (i);
}
