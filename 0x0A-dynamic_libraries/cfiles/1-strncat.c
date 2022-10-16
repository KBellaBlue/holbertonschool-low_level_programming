#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: the destination
 * @src: the source
 * @n: length
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, p;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (p = 0; src[p] != '\0' && p < n; p++)
	{
		dest[i + p] = src[p];
	}
	dest[i + p] = '\0';
	return (dest);
}
