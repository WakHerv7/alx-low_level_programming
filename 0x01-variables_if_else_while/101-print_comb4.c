#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int n1;
	int n2;

	for (n = '0'; n <= '7'; n++)
	{
		for (n1 = n + 1; n1 <= '9'; n1++)
		{
			for (n2 = n1 + 1; n2 <= '9'; n2++)
			{
				putchar(n);
				putchar(n1);
				putchar(n2);
				if (n == '7' && n1 == '8' && n2 == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
