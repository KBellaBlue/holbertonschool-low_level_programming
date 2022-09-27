#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_line - draw a straight line with the '_' character
 *
 * @n: the length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; n++)
	{
		_putchar('_');	
	}
	_putchar('\n');
}
