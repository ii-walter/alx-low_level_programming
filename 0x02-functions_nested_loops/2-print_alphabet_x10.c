#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x = 0, y;

	while (x < 10)
	{
		y = 97;
		while (y <= 122)
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
