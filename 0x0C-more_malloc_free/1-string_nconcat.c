#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: length to use of 2nd string
 *
 * Return: pointer to new space in memory with new string
 *
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, p, a;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (p = 0; s2[p] != '\0'; p++)
		;

	if (n < p)
		p = n;

	newstr = malloc((i + p + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	a = 0;
	while (a < i)
	{
		newstr[a] = s1[a];
		a++;
	}
	while (a < i + p)
	{
		newstr[a] = s2[a - i];
		a++;
	}

	newstr[a] = '\0';

	return (newstr);
}
