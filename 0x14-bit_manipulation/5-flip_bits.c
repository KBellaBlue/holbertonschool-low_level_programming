#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits needed to flip numbers
 *
 * @n: number to flip
 * @m: target number
 *
 * Return: number of bits to flip
 *
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}

	return (i);
}
