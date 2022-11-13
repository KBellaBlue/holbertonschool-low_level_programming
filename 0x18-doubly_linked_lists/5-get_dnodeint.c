#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 *
 * @head: the start of the list
 * @index: the node to return
 *
 * Return: the node or NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
