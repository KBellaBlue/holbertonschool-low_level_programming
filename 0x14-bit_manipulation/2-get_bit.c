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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return (n >> index & 1);
}
