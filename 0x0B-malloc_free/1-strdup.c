#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return pointer to copy of string
 *
 * @str: string to copy
 *
 * Return: pointer to string
 *
 */
char *_strdup(char *str)
{

	int i;
	unsigned int p;
	char *a = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	a = (char *)malloc(i + 1 * sizeof(char));

	if (a != NULL)
	{
		for (p = 0; str[p] != '\0'; p++)
		{
			a[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}

	a[p] = '\0';

	return (a);
}
