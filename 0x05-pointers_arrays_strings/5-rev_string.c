#include "main.h"

/**
 * rev_string - prints a sting in reverse
 * @s: pointer to the string
 * Return: 0 as always
 */

void rev_string(char *s)
{
	int length, i, half;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
	i = 0;
	half = length / 2;

	while (half--)
	{
		tmp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
