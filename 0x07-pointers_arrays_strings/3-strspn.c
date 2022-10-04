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

		if (!accept[p])
		{
			break;
		}
	}

	return (9);
}
