#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - make array of chars
 *
 * @size: the size of array
 * @c: the character to start
 *
 * Return: pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *p = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc((size) * sizeof(char));

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}

	return (p);
}
