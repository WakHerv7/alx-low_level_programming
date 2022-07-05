#include "main.h"
/**
 * print_last_digit - Entry point
 * @x: input
 * Return: 0 (Fail) or 1 (Success)
 */
int print_last_digit(int x)
{
	int pld;

	pld = (x % 10);

	if (pld < 0)
	{
		pld *= -1;
	}
	_putchar(pld + '0');
	return (pld);
}
