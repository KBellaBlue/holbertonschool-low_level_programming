#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 ten times
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int c;
	for(c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(49);
			}
			_putchar(i % 10);
		}
	}
	_putchar('\n');
}
