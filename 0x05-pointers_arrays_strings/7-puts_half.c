#include "main.h"

/**
 * puts_half - Prints half a string and a new line
 * @str: The string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int k = 0;
	int d;

	while (str[k] != '\0')
	{
		k++;
	}
	if (k % 2 == 1)
	{
		d = (k - 1) / 2;
		d += 1;
	}
	else
	{
		d = k / 2;
	}
	for (; d < k; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
