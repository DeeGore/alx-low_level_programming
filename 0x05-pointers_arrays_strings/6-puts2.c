#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: The string to be tested
 * Return: void
 */
void puts2(char *str)
{
	int d;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (d = 0; d < k; d += 2)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
