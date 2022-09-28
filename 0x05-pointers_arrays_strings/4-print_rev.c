#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s:the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (n = (length - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
