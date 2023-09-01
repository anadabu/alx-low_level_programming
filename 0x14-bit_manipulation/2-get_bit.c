#include "main.h"

/**
 * get_bit - gives value of a bit at a given index
 * @n: int to be checked
 * @index: index to get
 * Return: value of the bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((int)((n >> index) & 1));
}
