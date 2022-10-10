#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - return pointer to combined string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to combo string
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, p, a, s;
	char *combo = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (p = 0; s1[p] != '\0'; p++)
		;
	for (a = 0; s2[a] != '\0'; a++)
		;

	combo = (char *)malloc((p + a + 1) * sizeof(char));

	if (combo == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		combo[i] = s1[i];
	}
	for (s = 0; s2[s]; i++)
	{
		combo[i] = s2[s];
		s++;
	}

	return (combo);
}
