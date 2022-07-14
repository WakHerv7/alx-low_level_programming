#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char
 * @src: char
 * @n: int, amount of bytes from src
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
