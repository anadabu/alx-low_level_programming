#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: The character undergoing a check
 *
 * Return: 1 for alphabets or 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
