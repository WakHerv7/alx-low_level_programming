#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	b = 5;

	do {
		printf("%d\n", a);
		a++;
	} while (a < b);

	b = 15;
	a = 10;

	while (a < b)
		printf("%d\n", a++);

	return (0);
}
