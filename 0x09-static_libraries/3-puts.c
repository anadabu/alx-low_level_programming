#include "main.h"

/**
 * _puts - prints a sting with a new line
 * @str: Pointer to string to be printed
 * Return: 0 as always
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
