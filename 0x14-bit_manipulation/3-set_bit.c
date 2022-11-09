#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets a bit to 1 at index
 *
 * @n: number
 * @index: the index of the bit
 *
 * Return: 1 if it worked or -1 if error
 *
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
