#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - generates valid random passwords
 * Return: Always 0
 */

int main(void)
{
	int i, sum, x;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			x = 2772 - sum - '0';
			sum += x;
			putchar(x + '0');
			break;
		}
	}
	return (0);
}
