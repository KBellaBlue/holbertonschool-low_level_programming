#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * _isupper - checks for uppercase
 *
 * @c: The character code
 *
 * Return: Return 1 if uppercasecase, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
