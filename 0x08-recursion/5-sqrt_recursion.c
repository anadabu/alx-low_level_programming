#include "main.h"

/**
 * _sqrt_helper - Helper function to find square root recursively
 * @n: The number to find the square root of
 * @i: The value to check for square root
 * Return: The natural square root or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - natural square root using recursion
 * @n: The number to find the square root of
 * Return: The natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1));
}

