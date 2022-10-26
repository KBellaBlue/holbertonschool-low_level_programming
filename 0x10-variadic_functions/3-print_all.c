#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - print character
 *
 * @c: the character
 *
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_int - print int
 *
 * @i: the number
 *
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * print_float - print float
 *
 * @f: the number
 *
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - print string
 *
 * @s: the string
 *
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - print all items
 *
 * @format: list of argument types
 *
 */
void print_all(const char * const format, ...)
{
	int i, p;
	char *a = "";

	va_list args;

	types t[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format && format[i])
	{
		p = 0;
		while (p < 4)
		{
			if (t[p].t[0] == format[i])
			{
				printf("%s", a);
				t[p].f(args);
				a = ", ";
				break;
			}
			p++;
		}
		i++;
	}

	putchar('\n');
	va_end(args);
}
