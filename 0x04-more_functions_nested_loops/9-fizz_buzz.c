#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - print numbers 1 to 100 but
 * replace multiples of 3 with Fizz, 5 with Buzz, and 15 with FizzBuzz
 *
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (x % 3 == 0)
		{
			if (x % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		_putchar(' ');
	}
	printf("Buzz");
	_putchar('\n');
	return (0);
}
