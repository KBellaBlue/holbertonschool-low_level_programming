#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2d grid from memory
 *
 * @grid: columns
 * @height: rows
 *
 * Return: pointer to 2 dimensional array or NULL
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}

	free(grid);
}
