#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - runs the calculator
 *
 * @argc: number of arguements
 * @argv: array of arguments
 *
 * Return: nothing
 *
 **/
int main(int argc, char *argv[])
{
	int i;
	int p;
	int a;

	i = 0;
	p = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] == '\0')
	{
		i = atoi(argv[1]);
		p = atoi(argv[3]);
		a = (*get_op_func(argv[2]))(i, p);
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}

