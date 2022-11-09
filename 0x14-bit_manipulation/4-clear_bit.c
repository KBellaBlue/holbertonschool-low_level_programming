#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets a bit to 0 at a given index
 *
 * @n: number
 * @index: the index of the bit
 *
 * Return: 1 if it worked or -1 if error
 *
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (*n & 1UL << index)
		*n ^= 1UL << index;

	return (1);
}
