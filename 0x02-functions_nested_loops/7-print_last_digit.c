#include "main.h"

/**
 * print_last_digit - Prints last digitof a number
 *
 * @n: Number to be treated
 *
 * Return: alue of the last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
