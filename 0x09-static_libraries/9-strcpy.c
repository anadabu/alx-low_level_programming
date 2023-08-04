#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: origin string
 * @dest: destination of copied string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
