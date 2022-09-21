#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the alphabet
 *
 * Return: Always success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if(alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');

	return (0);
}

