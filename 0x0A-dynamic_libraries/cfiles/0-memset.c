#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * *_memset - fill the memory with a constant byte
 *
 * @s: the string
 * @b: the constant
 * @n: the number of bytes
 *
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
