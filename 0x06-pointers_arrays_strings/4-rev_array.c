#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * reverse_array - reverses content of array
 *
 * @a: the array
 * @n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, p;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		p = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = p;
	}
}
