#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head of list and returns ts data
 *
 * @head: the starting node of the list to pop
 *
 * Return: the starting nodes value or 0
 *
 **/
int pop_listint(listint_t **head)
{
	listint_t *i, *p;
	int a;

	if (*head == NULL)
		return (0);

	i = *head;

	p = i->next;

	a = i->n;

	free(*head);
	*head = p;

	return (a);
}
