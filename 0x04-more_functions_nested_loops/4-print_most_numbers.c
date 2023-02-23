#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9
 * Description: print the numbers excluding 2 and 4
 * Return: the numbers 0 to 9
 */

void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}

