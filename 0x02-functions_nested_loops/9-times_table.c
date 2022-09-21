#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * times_table - print the times tables
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');

		for (y = 1; y < 10; y++)
		{
			_putchar(',');
			_putchar(' ');

			if (x * y < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(((x * y) / 10) + '0');
			}

			_putchar(((x * y) % 10) + '0');
		}
		_putchar('\n');
	}
}
