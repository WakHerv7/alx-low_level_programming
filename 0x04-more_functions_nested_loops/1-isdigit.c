#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: digit that is checked
 * Return: 1 if digit, returns 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
