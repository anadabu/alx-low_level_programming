#include "main.h"
/**
 * reverse_array - function that reverses an array
 * @a: pointer to array
 * @n: number of elements in array
 * Return: just nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}
}
