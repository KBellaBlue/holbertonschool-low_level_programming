#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print all strings
 *
 * @separator: the seperating character
 * @n: the numbers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p != NULL)
		{
			printf("%s", p);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%p", p);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(args);
}
