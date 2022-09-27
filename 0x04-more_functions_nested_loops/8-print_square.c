#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_square - draw a square using the # character
 *
 * @n: the size of the square
 *
 * Return: void
 */
void print_square(int n)
{
	int i;
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (i = 0; i < n; i++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
