#include "main.h"

/**
 * print_triangle - entry point
 * Description: Prints a triangle
 * @size: size of the tiangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int r, h, spaces;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r < size; r++)
		{
			for (spaces = size - r; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
