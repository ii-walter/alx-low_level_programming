#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On seccess1.
 * On error, -1 is returned, and error is set approximately.
 */
int _putchat(char c)
{
	return (write(1, &c, 1));
}
