#include "main.h"

/**
 * _memcpy - copies bytes
 * @n: number of bytes to copy
 * @src: source of bytes
 * @dest: destination of bytes
 * Return: Pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
