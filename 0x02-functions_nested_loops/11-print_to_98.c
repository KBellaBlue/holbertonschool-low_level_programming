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
			printf("%d, ", n--);
		}
		printf("98");
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("98");
	}
	_putchar('\n');
}
