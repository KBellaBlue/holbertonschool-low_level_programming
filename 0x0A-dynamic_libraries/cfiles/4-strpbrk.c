#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - searches a string for any set of a set of bytes
 *
 * @s: the string
 * @accept: the set to match
 *
 * Return: the a pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, p;

	for (i = 0; s[i]; i++)
	{
		for (p = 0; accept[p]; p++)
		{
			if (s[i] == accept[p])
			{
				break;
			}
		}

		if (accept[p])
		{
			return (s + i);
		}
	}

	return (0);
}
