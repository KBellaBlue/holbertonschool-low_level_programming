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

	i = atoi(argv[1]);
	p = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && p == 0)
	{
		printf("Error\n");
		exit(100);
	}

	switch (argv[2][0])
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			a = (*get_op_func(argv[2]))(i, p);
			printf("%d\n", a);
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	return (0);
}

