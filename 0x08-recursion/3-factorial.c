#include "main.h"

/**
 * factorial - factorial using recursion
 * @n: Number to be calculated
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
