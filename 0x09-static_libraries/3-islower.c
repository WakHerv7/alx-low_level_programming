#include "main.h"
/**
 * _islower - Entry point
 * @c: input
 * Return: 0 (Fail) or 1 (Success)
 */
int _islower(int c)
{
	int x;

	x = 0;

	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}

	return (x);
}
