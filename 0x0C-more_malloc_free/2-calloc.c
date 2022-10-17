#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory from an array
 *
 * @nmemb: number of eleents in array
 * @size: size of array element type
 *
 * Return: pointer to allocated memory
 *
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i, p;
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = nmemb * size;

	array = malloc(p);

	a = (char *)array;

	if (a != NULL)
	{
		for (i = 0; i < p; i++)
			a[i] = 0;
		return (a);
	}

	return (NULL);
}
