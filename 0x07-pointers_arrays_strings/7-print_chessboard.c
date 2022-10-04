#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints a chessboard
 *
 * @a: pointer to pieces
 *
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, p;

	for (i = 0; i < 8; i++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[i][p]);
		}
		_putchar('\n');
	}
}
