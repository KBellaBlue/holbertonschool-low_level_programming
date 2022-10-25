#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all numbers
 *
 * @n: the numbers
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int p;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		p += va_arg(arg_p, int);
	}
	va_end(arg_p);

	return (p);
}
