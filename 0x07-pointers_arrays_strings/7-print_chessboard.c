#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Function that prints a chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int b;
	int k;

	for (b = 0; b < 8; b++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[b][k]);
		_putchar('\n');
	}
}
