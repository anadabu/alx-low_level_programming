#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: pointer to matched byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
