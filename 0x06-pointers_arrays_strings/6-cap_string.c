#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * *cap_string - capitalize all words of the string
 *
 * @s: the string
 *
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i, p;
	char symbol[] = " \t\n,;.!/\"(){}";

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) -= 'a' - 'A';
			}
			else
			{
				for (p = 0; p <= 12; p++)
				{
					if (symbol[p] == *(s + i - 1))
					{
						*(s + i) -= 'a' - 'A';
					}
				}

			}
		}
	}

	return (s);
}
