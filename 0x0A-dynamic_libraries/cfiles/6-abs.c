#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * _abs - get absolute value
 *
 * @n: The number
 *
 * Return: Return absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}

}
