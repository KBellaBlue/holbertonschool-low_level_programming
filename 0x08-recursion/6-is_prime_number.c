#include "main.h"
/**
 * p2 - checks for prime number
 *
 * @n: the number
 * @i: prime number
 *
 * Return: the square root or -1
*/
int p2(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (p2(n, i + 1));
}
/**
 * is_prime_number - checks for if number is a prime number
 *
 * @n: number
 *
 * Return: 1 if prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (p2(n, 2));
}
