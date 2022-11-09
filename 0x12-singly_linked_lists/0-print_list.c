#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list
 *
 * @h: The list
 *
 * Return: number of nodes
 *
 **/
size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
