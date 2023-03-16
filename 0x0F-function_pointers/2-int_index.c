#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integer numbers
 * @size: number of elements in the array array
 * @cmp: function pointer to function that performs comparison
 *
 * Return: index of the first element for which the cmp doesn'y return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
