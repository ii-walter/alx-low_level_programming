#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: the string to be modified
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0;
	int y;
	char c;
	int z;

	for (z = 0; s[z] != '\0'; z++)
		continue;
	y = z -1;

	while (!(x >= y))
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}
