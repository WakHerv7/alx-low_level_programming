#include "main.h"


/**
 * _strlen - entry point
 * @s: input
 * Return: integer
 */

void _strlen(char *s)
{
	int i = 1;
	int sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
