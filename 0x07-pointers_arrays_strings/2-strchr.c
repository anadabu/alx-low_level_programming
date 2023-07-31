#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @b: character to be located
 *
 * Return: NULL if not found but pointer to first occurance if found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
