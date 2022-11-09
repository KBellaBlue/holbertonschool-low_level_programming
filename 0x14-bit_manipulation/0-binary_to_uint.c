#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * @b: A string of 0 and 1 characters (binary number)
 *
 * Return: the converted number or 0 if b has numbers higher than 1 or null
 *
 **/
unsigned int binary_to_uint(const char *b)
{
	int i, p;
	unsigned int a = 0;

	if (b == NULL)
		return (0);

	p = 0;

	for (i = 0; b[i + 1]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	p = 1;

	while (i >= 0)
	{
		a += ((b[i] - '0') * p);
		p *= 2;

		i--;
	}

	return (a);
}
