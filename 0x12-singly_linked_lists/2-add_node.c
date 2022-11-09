#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node to the front of list_t
 *
 * @head: the start of the list
 * @str: the value of the new node
 *
 * Return: new list of NULL
 *
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;

	i = malloc(sizeof(list_t));

	if(i == NULL)
	{
		return (NULL);
	}

	i->str = strdup(str);
	i->len = strlen(str);
	i->next = *head;

	*head = i;

	return (*head);
}
