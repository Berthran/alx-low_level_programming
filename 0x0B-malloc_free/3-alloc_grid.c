#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a zero intialised 2D array of integers
 * @width: the array's width (no. of cols)
 * @height: the array's height (no. of rows)
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *ptr;
	int **arr_2D;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*
	 * Creates a pointer to pointers - which is a
	 * pointer to an array of 'height' pointers to integers
	 */
	arr_2D = (int **)malloc(height * sizeof(int *));

	/*
	 * Where each pointer will be set to point to a
	 * contigous memory allocated for 'width' integer elements
	 * arr-->|--->ptr1 --> [1,  2,  3]
	 * arr-->|--->ptr2 --> [5,  6,  7]
	 * arr-->|--->ptr3 --> [9, 10, 11]
	 * This makes arr (whose name is a const pointer) a pointer to pointers
	 */

	if (arr_2D == NULL)
		return (NULL);


	/* Points each pointer to a contigous memory of 'width' integers */
	for (i = 0; i < height; i++)
	{
		ptr = (int *)malloc(width * sizeof(int));
		if (!ptr)
			return (NULL);
		arr_2D[i] = ptr;
	}

	/* Intialize each integer allocated memory to zero */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr_2D[i][j] = 0;
	}
	return (arr_2D);
}
