#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @dest: char
 * @src: char
 * @n: int, amount of bytes from src
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (j = j; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
