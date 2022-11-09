#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 *
 * @head: the starting node of the list
 * @index: the index to return
 *
 * Return: the value of index or NULL
 *
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *i;
	unsigned int p;

	if (head == NULL)
		return (NULL);

	i = head;

	for (p = 0; p < index && i; p++)
	{
		if (i->next == NULL)
			return (NULL);
		i = i->next;
	}

	return (i);
}
