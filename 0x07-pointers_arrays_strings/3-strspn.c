#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 *
 * @s: the string
 * @accept: the prefix to match
 *
 * Return: the a pointer to the character
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int p;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				p++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (p);
			}
		}

		s++;
	}

	return (p);
}
