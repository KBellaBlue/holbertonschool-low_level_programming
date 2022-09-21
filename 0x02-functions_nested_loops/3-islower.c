#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _islower - checks for lowercase
 *
 * @c: The character code
 *
 * Return: Return 1 if lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
