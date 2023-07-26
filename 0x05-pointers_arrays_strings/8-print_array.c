#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: largest number in array
 * Return: 0 as always
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
