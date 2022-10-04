#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: the string
 * @c: the char
 *
 * Return: the a pointer to the character
 */
char *_strchr(char *s, char *c)
{

	while (*s++)
	{
		if (*s == c)
		{
			break;
		}
	}

	return (s);
}
