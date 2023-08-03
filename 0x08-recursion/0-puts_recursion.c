#include "main.h"

/**
 * _puts_recursion - prints a strign followed by a new line
 * @s: strign to be printed
 * Return: nothing at all
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
