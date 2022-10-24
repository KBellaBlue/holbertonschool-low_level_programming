#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an array for a matching interger
 *
 * @array: array of numbers
 * @size: size of array
 * @cmp: compare function
 *
 * Return: index of first element and -1 for no matches / size is 0
 */
int int_index(int *array, int size, void (*cmp)(int))
{
	unsigned int i;

	if (cmp != NULL && array != NULL && size <= 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}
		}
	}

	return (-1);
}
