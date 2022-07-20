#include "main.h"

int prime_checker(int n, int i);

/**
 * is_prime_number - Entry point
 * @n: input
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prime_checker - Checks for prime
 * @n: input
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: If square root
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
