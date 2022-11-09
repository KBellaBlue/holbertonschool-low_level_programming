#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns number of element in list
 *
 * @h: The list
 *
 * Return: number of nodes
 *
 **/
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
