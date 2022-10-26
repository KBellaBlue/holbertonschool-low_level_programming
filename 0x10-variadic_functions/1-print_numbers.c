#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 *
 * @separator: the seperating character
 * @n: the numbers
 *
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		if (i != (n - 1) && seperator != null)
		{
			printf("%d%s", va_arg(vargs, unsigned int), seperator);
		}
		else
		{
			printf("%d", va_arg(args, unsigned int));
		}
	}
	putchar('\n');
	va_end(args);
}
