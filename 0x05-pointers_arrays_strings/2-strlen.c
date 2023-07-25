#include "main.h"

/**
 * _strlen - checks length of a string
 * @s: String to be checked
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
