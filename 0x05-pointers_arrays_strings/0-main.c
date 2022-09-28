#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main -
 *
 * Return: void
 */
int main(void)
{
	int n;
	
	n = 402;
	printf("n%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
