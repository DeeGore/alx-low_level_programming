#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program of numbers 1 to 100
 *
 * Return; 0
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", k);
		}
		if (k != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
