#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary version of a number
 *
 * @n: number to print
 *
 * Return: void
 *
 **/
void print_binary(unsigned long int n)
{
	int i;

	if (n >> 1)
		print_binary(n >> 1);

	i = n & 1;
	putchar(i + '0');
}
