#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	/**
	 * code below
	 * lower alphabet first
	 * uppercase next
	 */
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		putchar(n);
	}
	{
		putchar('\n');
	}

	return (0);

}
