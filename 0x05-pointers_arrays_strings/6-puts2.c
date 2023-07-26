#include "main.h"

/**
 * puts2 - prints characters with a new line
 * @str: Pointer to string to be printed
 * Return: 0 as always
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
