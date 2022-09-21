#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_to_98 - print n to 98
 *
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			n--;
			_putchar(',');
			_putchar(' ');

		}
		_putchar('9');
		_putchar('8');
	}
	else
	{
		while (n < 98)
		{
			_putchar(n + '0');
			n++;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
