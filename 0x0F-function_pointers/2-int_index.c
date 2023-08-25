#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size:  is the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches or size <=0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
