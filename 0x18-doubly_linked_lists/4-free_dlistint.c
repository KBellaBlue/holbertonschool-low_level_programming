#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: the start of the list
 *
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head;

		head = head->next;

		free(i);
	}
}
