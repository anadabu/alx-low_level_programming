#include "main.h"

/**
 * print_rev - prints a sting in reverse
 * @s: Pointer to string to be printed in reverse
 * Return: 0 as always
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
