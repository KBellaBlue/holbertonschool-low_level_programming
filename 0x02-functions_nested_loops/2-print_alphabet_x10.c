#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: Always success
 */
void print_alphabet(void)
{
	char alphabet;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}

	_putchar('\n');

}
