#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * *leet - encodes a string into 1337
 *
 * @s: the string
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, p;
	char alphabet[] = "aAeEoOtTlL";
	char leet[] = "4433007711"

	for (i = 0; *(s + i); i++)
	{
		for (p = 0; p <= 9; p++)
		{
			if (alphabet[p] == s[i])
			{
				s[i] = b[p];
			}
		}
	}

	return (s);
}
