#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check the code
 * @c: is letter required
 *
 * Return: Always 0.
 */
int _isaplha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
