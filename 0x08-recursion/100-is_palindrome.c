#include "main.h"

int lengthc(char *s);
int palindrome(char str[], int st, int end);

/**
 * is_prime_number - Entry point
 * @s: input
 * Return: Always 0
 */
int is_prime_number(char *s)
{
	int len;

	len = lengthc(s);

	if (len == 0)
		return (1);
	return (palindrome(s, 0, len - 1));
}

/**
 * lengthc - finds the length count
 * @s: input
 * Return: length size
 */
int lengthc(char *s)
{
	if (*s != '\0')
		return (1 + lengthc(s + 1));
	return (0);
}

/**
 * palindrome - checks if start and end of srting matches
 * @str: string
 * @st: start of string 0
 * @end: end of string from is_palindrome, from lengthc
 * Return: if str is a palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
		return (1);
	else if (str[st] != str[end])
		return (0);
	else if (st <= end || st < end + 1)
		return (palinrome(str, st + 1, end - 1));
	return (1);
}
