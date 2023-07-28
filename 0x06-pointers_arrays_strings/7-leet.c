#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer to string
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i, j;
	char leetAlph[] = "aAeEoOtTlL";
	char leetNum[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (leetAlph[j] == s[i])
			{
				s[i] = leetNum[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
