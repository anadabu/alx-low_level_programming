#include "main.h"

/**
 * swap_int - takes in two integer variables and swaps them
 * @a: Swaps and stores address of b
 * @b: swaps and stores the addres of a
 * Return: 0 as always
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
