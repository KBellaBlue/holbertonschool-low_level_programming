#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
