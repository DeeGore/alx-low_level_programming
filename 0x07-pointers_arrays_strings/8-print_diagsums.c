#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of two diagonals
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum2, sum4, y;

	sum2 = 0;
	sum4 = 0;

	for (y = 0; y < size; y++)
	{
		sum2 = sum2 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum4 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum2, sum4);
}
