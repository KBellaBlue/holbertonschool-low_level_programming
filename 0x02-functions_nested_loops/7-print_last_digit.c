#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - prints the far right digit of a number
 *
 * @n: The number
 *
 * Return: Return the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + 48);

	return (last_digit);
}
