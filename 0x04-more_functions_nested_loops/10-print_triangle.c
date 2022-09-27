#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int line;
	
	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (i = 1; i <= size; i++)
			{
				if (i <= size - line)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
