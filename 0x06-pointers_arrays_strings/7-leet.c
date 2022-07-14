#include "main.h"

/**
 * leet - lowercase to uppercase
 * @s: input string
 * Return: Caps on first letter of a separator
 */
char *leet(char *s)
{
	int i, x;
	char find[5][2] = {{'a', 'A'},  {'e', 'E'}, {'o', 'O'},
		{'t', 'T'}, {'l', 'L'}};
	char replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (find[x][0] == s[i] || find[x][1] == s[i])
			{
				s[i] = replacer[x];
			}
		}
		i++;
	}
	return (s);
}
