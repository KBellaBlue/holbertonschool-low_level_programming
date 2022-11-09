#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees an int list and set head to NULL
 *
 * @head: the starting node of the list
 *
 * Return: void
 *
 **/
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{

		free(head);

		*head = (*head)->next;
	}

	*head = NULL;
}
