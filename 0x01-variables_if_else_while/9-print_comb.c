#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		putchar((n %  10) + '0');
	
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}

	return (0);

}
