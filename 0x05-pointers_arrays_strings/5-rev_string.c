#include "main.h"


/**
 * rev_string - entry point
 * @s: string input
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char rev = s[0];
	int fcounter = 0;

	while (s[fcounter] != '\0')
	{
		fcounter++;
	}
	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
	_putchar('\n');
}
