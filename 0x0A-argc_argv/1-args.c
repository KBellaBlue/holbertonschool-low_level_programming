#include <stdio.h>
/**
 * main - print number of arguements passed
 *
 * @argc: int
 * @argv: character
 *
 * Return: 0
 *
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
