#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separtor, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * struct format_types - the four types
 *
 * @t: the type
 * @p: pointer to function matching type
 */
typedef struct format_types
{
	char *t;
	void (*p)(va_list);
} format_types;

#endif /* VARIADIC_FUNCTIONS_H */

