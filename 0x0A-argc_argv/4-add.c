#include <stdio.h>
#include <stdlib.h>
/**
 * main - print addition
 *
 * @argc: int
 * @argv: character
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int i, p, a;
	int total;

	for (i = 1; i < argc; i++)
	{
		for (p = 0; argv[i][p] != '\0'; p++)
		{
			if (argv[i][p] < '0' || argv[i][p] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		total += atoi(argv[a]);
	}
	printf("%d\n", total);
	return (0);
}
