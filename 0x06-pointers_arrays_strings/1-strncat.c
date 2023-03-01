#include "main.h"

/**
 * _strncat - Program that concatenates two strings
 * @dest: String to be appended upon.
 * @src: To be appended to dest
 * @n: Number of bytes
 * Return: Apointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_d = 0;

	while (dest[index++])
		dest_d++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_d++] = src[index];
	return (dest);
}

