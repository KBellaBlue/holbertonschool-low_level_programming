#include <stdio.h>
#include "main.h"
/**
 * *_strstr - locates a substring
 *
 * @haystack: the string
 * @needle: the set to match
 *
 * Return: the a pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, p;

	i = 0;
	p = 0;

	while (haystack[i])
	{
		while (needle[p] && (haystack[i] == needle[0]))
		{
			if (haystack[i] == needle[p])
			{
				p++;
			}

			else
			{
				break;
			}
		}

		if (needle[p])
		{
			i++;
			p = 0;
		}

		else
		{
			return (haystack + i);
		}
	}

	return (0);
}
