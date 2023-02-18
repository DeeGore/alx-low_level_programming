#include <stdio.h>
/**
 * main - A program that prints all numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char l;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (l = 'a' ; l <= 'f' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
