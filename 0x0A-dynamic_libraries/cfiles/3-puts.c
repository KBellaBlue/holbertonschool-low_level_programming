#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _puts - print a string
 *
 * @str:the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}

	_putchar('\n');
}
