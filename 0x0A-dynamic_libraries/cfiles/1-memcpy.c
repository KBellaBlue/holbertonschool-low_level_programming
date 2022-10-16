#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_memcpy - copies n bytes from memory area src to dst
 *
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 *
 * Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
