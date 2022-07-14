#include "main.h"

/**
 * leet - lowercase to uppercase
 * @s: input string
 * Return: Caps on first letter of a separator
 */
char *leet(char *s)
{
	int i, x;
	char low_letters[] = {'a', 'e', 'o', 't', 'l'};
	char upp_letters[] = {'A', 'E', 'O', 'T', 'L'};
	char replacer[] = {'4', '3', '0', '7', '1'};

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
