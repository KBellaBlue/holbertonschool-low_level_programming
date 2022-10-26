#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 *
 * @n: the numbers
 *
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int p;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			printf("%s", separator);

		}
	}
	printf("%d", va_arg(args, int));
	va_end(args);
	putchar('\n');
}
