#include "function_pointers.h"

/**
 * array_iterator - iterates over an array
 * @array: array to perform operation on
 * @size: size of array
 * @action: operation to perform on array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action != NULL)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
