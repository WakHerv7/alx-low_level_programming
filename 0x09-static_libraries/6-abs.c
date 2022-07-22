#include "main.h"
/**
 * _abs - Entry point
 * @x: input
 * Return: 0 (Fail) or 1 (Success)
 */
int _abs(int x)
{
	if (x < 0)
	{
		x *= -1;
	}
	return (x);
}
