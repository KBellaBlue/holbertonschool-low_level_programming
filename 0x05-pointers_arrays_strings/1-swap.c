#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * swap_int - takes two numbers and swaps them
 *
 * @a: pointer of the first number
 * @b: pointer of the second number
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*b = *a;
	*b = n;
}
