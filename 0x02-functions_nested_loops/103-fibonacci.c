#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, sum, i;

	a = 1;
	b = 2;

	for (i = 0, sum = 0; a < 4000000; i++)
	{
		if (!(a % 2))
		{
			sum += a;
		}
		b = a + b;
		a = b - a;
	}
	printf("%ld\n", sum);
	return (0);
}
