#include "main.h"
/**
 *  print_sign- Entry point
 * @n: input
 * Return: 0 (Fail) or 1 (Success)
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	else
	{
		_putchar('0');
		x = 0;
	}
	return (x);
}
