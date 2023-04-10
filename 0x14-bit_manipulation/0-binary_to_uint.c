#include "main.h"
#include <stdlib.h>

/**
 *  binary_to_uint - Function that converts binary number to an unsigned int
 *  @b: Pointer to a string of 0 and 1 chars
 *  Return: the converted number or 0 if
 *  there is 1 or more chars in the string b
 *  that is not 0 or 1, and b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (b == NULL)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] == '0' || b[x] == '1')
		{
			result = (result << 1) | (b[x] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
