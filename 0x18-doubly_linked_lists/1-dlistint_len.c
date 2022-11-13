#include "lists.h"

/**
 * print_dlistint_len - return number of elements of a list
 *
 * @h: the start of the list
 *
 * Return: the number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
