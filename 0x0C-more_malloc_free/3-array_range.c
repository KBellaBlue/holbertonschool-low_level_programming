#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: starting number
 * @max: ending number
 *
 * Return: pointer to array
 *
 **/

int *array_range(int min, int max)
{
	int *array = NULL;
	int i, p, a;

	a = 0;
	if (min > max)
		return (NULL);

	p = (max - min) + 1;

	array = malloc(p * sizeof(int));

	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[a] = i;
			a++;
		}
		return (array);
	}

	return (NULL);
}
