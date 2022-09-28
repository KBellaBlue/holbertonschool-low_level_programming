#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strcpy - copies the string from one pointer to another
 *
 * @dest: the destination
 * @src: the source string
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
