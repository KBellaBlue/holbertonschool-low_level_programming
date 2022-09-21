#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet 10 times
 *
 * Return: Always success
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int c;

	for (c = 0; c < 10; c++)
	{
		print_alphabet();
	}

	_putchar('\n');

}
