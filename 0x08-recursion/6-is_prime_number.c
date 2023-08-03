#include "main.h"

/**
 * prime_helper - Helper function to check if a number is prime recursively
 * @n: The number to check for prime
 * @div: The current divisor to check for divisibility
 * Return: 1 if prime, 0 if not prime
 */
int prime_helper(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime_helper(n, div - 1));
}

/**
 * is_prime_number - primer number checker
 * @n: Number to be cahecked
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}
