#include "main.h"
/**
 * _isalpha - Entry point
 * @c: input
 * Return: 0 (Fail) or 1 (Success)
 */
int _isalpha(int c)
{
	int x;

	x = 0;

	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}

	return (x);
}
