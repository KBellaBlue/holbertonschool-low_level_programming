#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print 0 to 9 combinations
 *
 * Return: Always success
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 9)
		{
			continue;

		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

