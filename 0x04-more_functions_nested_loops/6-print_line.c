#include "main.h"

/**
 * print_line - print straight line
 * @n: size of line
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
