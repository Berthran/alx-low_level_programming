#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialised by c
 * @size: size of array
 * @c: first array element
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else if (size > 0)
	{
		char *arr;
		unsigned int i;

		arr = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
			arr[i] = c;
		return (arr);
	}
	return (NULL);
}
