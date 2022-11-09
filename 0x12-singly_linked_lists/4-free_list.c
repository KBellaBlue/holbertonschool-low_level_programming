#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list in memory
 *
 * @head: the start of the list
 *
 * Return: void
 *
 **/
void free_list(list_t *head)
{
	list_t *i;

	i = head->next;

	if (i == NULL)
	{
		return;
	}

	free(head->str);
	free(head);
	head = i;

	free_list(head);
}
