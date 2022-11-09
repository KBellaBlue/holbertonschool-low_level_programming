#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 *
 * @h: The list
 *
 * Return: number of nodes
 *
 **/
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);

		h = h->next;
	}

	return (i);
}
