#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: array name
 * @n: nb of elmts to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
