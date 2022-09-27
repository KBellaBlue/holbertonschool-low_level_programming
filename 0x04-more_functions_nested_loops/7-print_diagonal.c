#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 *
 * @n: the length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (i = 0; i < line; i++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
