#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n);
{
	int str_len, i;

	str_len = 0;
	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, str_len++)
	{
		dest[str_len] = src[i];
	}
	dest[str_len] = '\0';
	return (dest);
}
