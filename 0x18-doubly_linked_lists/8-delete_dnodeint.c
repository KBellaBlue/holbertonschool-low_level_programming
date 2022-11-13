#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in list
 *
 * @head: the start of the list
 * @index: the node to remove
 *
 * Return: 1 or -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i, *p;

	if (head == NULL)
		return (-1);

	i = *head;

	if (index < 1)
	{
		if (!i)
			return (-1);
		*head = i->next;
		if (*head)
			(*head)->prev = NULL;
		free(i);
		return (1);
	}
	for (; i; i = i->next, index--)
	{
		if (index - 1 == 0)
		{
			p = i->next;
			if (!p)
				break;
			i->next = p->next;
			if (p->next)
				p->next->prev = i;
			free(p);
			return (1);
		}
	}

	return (-1);
}
