#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * puts_half - print half of the string
 *
 * @str:the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, p, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	p = (length / 2);

	if ((length % 2) == 1)
	{
		p = ((length + 1) / 2);
	}

	for (i = p; str[i] != '0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
