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

	while (head)
	{
		i = head->next;

		free(head->str);
		free(head);

		head = i;
	}
}
