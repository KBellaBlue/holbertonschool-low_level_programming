#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s:the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}

	_putchar('\n');
}
