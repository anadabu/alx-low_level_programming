#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit = 0;
	int printed = 0;

	if (n == 0)
		_putchar('0');
	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed == 1)
		{
			_putchar('0');
		}
	}
}
