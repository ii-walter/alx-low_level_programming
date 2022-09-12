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

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
		if (n <= '8')
	{
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}

	return (0);

}
