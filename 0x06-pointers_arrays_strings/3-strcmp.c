#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * _strcpm - compare strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if matching otherwise difference
 */
int _strcpm(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s2 + i) != '\0')
		{
			if (*(s1 + i) == *(s2 + i))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
