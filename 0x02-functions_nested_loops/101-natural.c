#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, i;

	for (i = 1023, sum = 0; i; i--)
	{
		if (!(i % 3) || !(i % 5))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
