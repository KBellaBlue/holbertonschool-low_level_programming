#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of list_t
 *
 * @head: the start of the list
 * @str: the value of the new node
 *
 * Return: new element in list of NULL
 *
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *p;

	i = malloc(sizeof(list_t));

	if (i == NULL)
	{
		return (NULL);
	}

	i->str = strdup(str);
	i->len = strlen(str);
	i->next = NULL;

	p = *head;

	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		while (p->next)
		{
			p = p->next;
		}
		p->next = i;
	}

	return (i);
}
