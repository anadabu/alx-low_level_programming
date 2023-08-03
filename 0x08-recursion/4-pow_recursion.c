#include "main.h"

/**
 * _pow_recursion - exponentials using recursion
 * @x: the base number
 * @y: the power
 * Return: The power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
