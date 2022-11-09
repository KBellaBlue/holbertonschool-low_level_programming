#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns value of a bit at given index
 *
 * @n: number
 * @index: the index of the bit
 *
 * Return: value of the bit at index or -1
 *
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = (n >> index) & 1;

	if ((i == 1) || (i == 0))
		return (i);
	else
		return (-1);
}
