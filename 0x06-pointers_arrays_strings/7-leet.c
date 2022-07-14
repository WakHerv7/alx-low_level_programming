#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	int i, x;
	int low_letters[] = {'a', 'e', 'o', 't', 'l'};
	int upp_letters[] = {'A', 'E', 'O', 'T', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (low_letters[x] == s[i] || upp_letters[x] == s[i])
			{
				s[i] = replacer[x];
			}
		}
		i++;
	}
	return (s);
}
