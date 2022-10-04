#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 *
 * @a: the pointer to the matrix
 * @size: width of the matrix
 *
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, p, h, d;

	d = 0;
	p = 0;

	for (i = 0; i < size; i++)
	{
		h = (i * size) + i;
		p += *(h + a);
	}
	for (i = 0; i < size; i++)
	{
		h = (i * size) + (size - 1 - i);
		d += *(h + p);
	}

	printf("%i, %i\n", p, d;
}
