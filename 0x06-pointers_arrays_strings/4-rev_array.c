#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements in the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int x, y, pet;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			pet = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = pet;
		}
	}
}
