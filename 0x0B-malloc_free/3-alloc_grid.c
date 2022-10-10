#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - create two dimensional array
 *
 * @width: how many columns
 * @height: how many rows
 *
 * Return: pointer to 2 dimensional array or NULL
 *
 */
int **alloc_grid(int width, int height)
{
	int i, p, a;
	int *s;
	int **array2d = NULL;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	array2d = (int **)malloc(height * sizeof(int *));

	if (array2d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(array2d + i) = (int *)malloc(width * sizeof(int));
		if (*(array2d + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				s = array2d[i];
				free(s);
			}
			free(array2d);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{
		for (a = 0; a < width; a++)
		{
			array2d[p][a] = 0;
		}
	}
	return (array2d);
}
