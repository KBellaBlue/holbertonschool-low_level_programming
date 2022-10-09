#include "main.h"
/**
 * sq2 - calculates square root recursively
 *
 * @n: the number
 * @i: square root
 *
 * Return: the square root or -1
*/
int sq2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (sq2(n, i + 1));
}
/**
 * _sqrt_recursion - return natural square root of number
 *
 * @n: number
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (sq2(n, 1));
}
