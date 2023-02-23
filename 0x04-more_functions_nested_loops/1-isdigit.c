#include "main.h"
/**
 * _isdigit - Check for digit
 * @i: The number to be checked
 * Return: 1 for a char that is a digit or 0 otherwise
 */
int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	return (0);
}
