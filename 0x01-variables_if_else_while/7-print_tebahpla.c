#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print reverse alphabet
 *
 * Return: Always success
 */
int main(void)
{
	int n;

	for (n = 122; n > 97; n--)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

