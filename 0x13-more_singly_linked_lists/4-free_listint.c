#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees an int list
 *
 * @head: the starting node of the list
 *
 * Return: void
 *
 **/
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;

		free(head);

		head = i;
	}
}
