#include "main.h"


/**
 * swap_int - entry point
 * @a: input 1
 * @b: input 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
