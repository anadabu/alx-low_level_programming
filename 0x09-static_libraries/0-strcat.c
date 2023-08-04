#include "main.h"
/**
 * _strcat - function that joins two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int str_len, i;

	str_len = 0;
	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; src[i] != '\0'; i++, str_len++)
	{
		dest[str_len] = src[i];
	}
	dest[str_len] = '\0';
	return (dest);
}
