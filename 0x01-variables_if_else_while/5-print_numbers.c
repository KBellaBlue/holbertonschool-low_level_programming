#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print 0 to 9
 *
 * Return: Always success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}

	putchar('\n');

	return (0);
}

