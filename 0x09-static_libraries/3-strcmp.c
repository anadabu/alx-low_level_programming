#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: <0 if string is less than the other or >0 if string is greater
 */

int _strcmp(char *s1, char *s2)
{
	int value, i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	value = s1[i] - s2[i];
	return (value);
}
